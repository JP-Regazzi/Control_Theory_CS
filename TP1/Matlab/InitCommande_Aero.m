% -------------------------------------------------------------------------
%
%% Initialisation des param�tres de la plateforme AERO
%
%--------------------------------------------------------------------------

clear all   % Effade toutes les varaibles de la memoire
close all   % Fermeture de toutes les figures

%------------------------------------------------------------------------
% Quanser Aero Parameters
%------------------------------------------------------------------------
Mb = 1.15;% Masse du corps rigide
Dm = 0.0071; %Distance du centre de gravit� � l'axe de rotation
Dt = 0.158; % Distance de la pouss�e � l'axe de rotation
g = 9.81;

%------------------------------------------------------------------------
%------------------------------------------------------------------------
%
%% Boucle de vitesse
%
%------------------------------------------------------------------------
%------------------------------------------------------------------------

% Periode d'�chantillonnage boucle de vitesse
Te1 = 0.002; % 2ms

% Parulam�tres Kv et tau
Kv = 19.5939; 
tau = 0.18537; 

% Repr�sentation d'�tat de la chaine de motorisation xa = [wh z]'; 
Am = [-1/tau 0; 1 0]; 
B1m = [Kv/tau ; 0]; 
B2m = [0 ; -1]; 
Bm = [B1m, B2m];
Cm = [1 0]; 

% Retour d'�tat (2.2.1)
xi = 0.7;
w0 = 22;
p = [w0*(-xi-1i*sqrt(1-xi^2)) w0*(-xi+1i*sqrt(1-xi^2))]';

Ka = place(Am, B1m, p); % Gain du retour d'�tat, vecteur (1x2) � calculer avec "place"
Kw = Ka(1); % Gain pour la vitesse, x1 = wh
Kz = Ka(2); % Gain pour l'action int�grale, w2 = z 

sysm=ss(Am-B1m*Ka,Bm,Cm,[0 0]);
ym=step(sysm);

%------------------------------------------------------------------------
%
% Simulation de la r�ponse � un �chelon avec le mod�le de synth�se
% ss(Am,Bm,Cm,Dm) et le reour d'�tat Ka
%
%------------------------------------------------------------------------
% Utiliser "sys=ss(A,B,C,D)" pour definir un syst�me et "step(sys)" pour
% afficher la r�ponse � un �chelon unitaire, ou step(Amp*sys) pour un
% �chelon d'amplitude Amp
%------------------------------------------------------------------------

%------------------------------------------------------------------------
%------------------------------------------------------------------------
%
%% Identification des param�tres du mouvement en inclinaison
%
%------------------------------------------------------------------------
%------------------------------------------------------------------------
omega_h = [-250 -200 -150 150 200 250]; % position theta en radians
theta_h = [-39.9 -24.79 -12.83 16 28.3 56.07]; % position theta en radians � compl�ter MUDAR DEPOISSS ###########################################
F0_h = Mb*g*Dm/Dt*sin(theta_h*pi/180); % � compl�ter 
Kt = 0.001; % � compl�ter MUDAR DEPOISSS ###########################################

%------------------------------------------------------------------------
%
% Lin�arisation et d�termination de Jp et Dp
%
%------------------------------------------------------------------------
%% 3.2.4
x0=15.92;
y0=19.6875;
x1=20.66;
y1=10.8984;
x2=25.4;
y2=4.39453;

T = (-x0+x1-x0+x2)/3;
k = 4;
eta = 1/k*log(abs(y0)/abs(y2));
xi = eta/pi/sqrt(1+(eta/pi)^2);
omega0 = 2*pi/(T*sqrt(1-xi^2));

Jp = Mb*g*Dm/omega0^2;
Dp = 2*xi*omega0*Jp;

%------------------------------------------------------------------------
% Modele Lineaire
%------------------------------------------------------------------------
A = [0 1;-Mb*g*Dm/Jp -Dp/Jp];
B = [0; Dt*Kt/Jp];
C = [1 0];
D = 0;
sys = ss(A, B, C, D);

%------------------------------------------------------------------------
% Commande LQ
%------------------------------------------------------------------------
Te2 = 0.02; % 20ms
%Te1 = 0.05;
% intermediaires
theta_max = pi/4;
omega_h_max=500;
q=7; % define here the weight
Q=C.'*q/theta_max^2*C;
R=1/omega_h_max^2;

% retour d'�tat
K_lq = lqr(A,B,Q,R);  % Gain du retour d'�tat, vecteur (1x2)
M_lq = -(C*(A-B*K_lq)^-1*B)^-1;  % Gain pour la r�f�rence (1x1)

% cleaning space
clear theta_max
clear omega_h_max 
clear zi_max
clear q 
clear Q
clear R

%------------------------------------------------------------------------
% Commande LQI
%------------------------------------------------------------------------
%% steady state
Aa = [A [0;0];1 0 0];
B1a = [B;0];
B2a = [0;0;-1];
Ca = [1 0 0;0 0 1];
Da = [0;0];

% intermediaires
theta_max = pi/4;
omega_h_max=500;
zi_max = 0.15;
q=4; % define here the weight
z=1; % define here the weight
r=1; % define here the weight
Qn=[1/theta_max 0;0 1/zi_max];
Q=Ca.'*Qn*[q 0;0 z]*Qn*Ca;
R=r/omega_h_max^2;


K_lqi = lqr(Aa, B1a, Q, R);  % Gain du retour d'�tat avec action int�grale, vecteur (1x3)

% cleaning space
clear theta_max
clear omega_h_max 
clear zi_max
clear q z r
clear Q Qn
clear R

%------------------------------------------------------------------------
% Observateur
%------------------------------------------------------------------------

Asys = [];% Matrice A mod�le lin�aire (dynamique)
Bsys = [];% Matrice B mod�le lin�aire (de Commande)
Csys = [];% Matrice C du mod�le lin�aire (de Sortie)
L = [];% Gain de l'observateur

%------------------------------------------------------------------------
% Correcteur PID
%------------------------------------------------------------------------
Kp = 1;% Action proportionnelle
Ti = 1; % Action integrale 
Td = 1; % Action deriv�e
tau_d = 1 ;% Filtage de l'action deriv�e



