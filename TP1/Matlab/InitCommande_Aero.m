% -------------------------------------------------------------------------
%
%% Initialisation des paramètres de la plateforme AERO
%
%--------------------------------------------------------------------------

clear all   % Effade toutes les varaibles de la memoire
close all   % Fermeture de toutes les figures

%------------------------------------------------------------------------
% Quanser Aero Parameters
%------------------------------------------------------------------------
Mb = 1.15;% Masse du corps rigide
Dm = 0.0071; %Distance du centre de gravité à l'axe de rotation
Dt = 0.158; % Distance de la poussée à l'axe de rotation
g = 9.81;

%------------------------------------------------------------------------
%------------------------------------------------------------------------
%
%% Boucle de vitesse
%
%------------------------------------------------------------------------
%------------------------------------------------------------------------

% Periode d'échantillonnage boucle de vitesse
Te1 = 0.002; % 2ms

% Parulamètres Kv et tau
Kv = 19.5939; 
tau = 0.18537; 

% Représentation d'état de la chaine de motorisation xa = [wh z]'; 
Am = [-1/tau 0; 1 0]; 
B1m = [Kv/tau ; 0]; 
B2m = [0 ; -1]; 
Bm = [B1m, B2m];
Cm = [1 0;0 1]; 
Dm = [0 0;0 0]; 

% Retour d'état (2.2.1)
xi = 0.7;
w0 = 22;
p = [w0*(-xi-1i*sqrt(1-xi^2)) w0*(-xi+1i*sqrt(1-xi^2))]';

Ka = place(Am, B1m, p); % Gain du retour d'état, vecteur (1x2) à calculer avec "place"
Kw = Ka(1); % Gain pour la vitesse, x1 = wh
Kz = Ka(2); % Gain pour l'action intégrale, w2 = z 

sysm=ss(Am-B1*Kam,Bm,Cm,Dm);
ym=step(sysm);

%------------------------------------------------------------------------
%
% Simulation de la réponse à un échelon avec le modèle de synthèse
% ss(Am,Bm,Cm,Dm) et le reour d'état Ka
%
%------------------------------------------------------------------------
% Utiliser "sys=ss(A,B,C,D)" pour definir un système et "step(sys)" pour
% afficher la réponse à un échelon unitaire, ou step(Amp*sys) pour un
% échelon d'amplitude Amp
%------------------------------------------------------------------------

%------------------------------------------------------------------------
%------------------------------------------------------------------------
%
%% Identification des paramètres du mouvement en inclinaison
%
%------------------------------------------------------------------------
%------------------------------------------------------------------------
omega_h = [-250 -200 -150 150 200 250]; % position theta en radians
theta_h = []; % position theta en radians à compléter
FO_f = []; % à compléter
Kt = 0.001; % à compléter MUDAR DEPOISSS ###########################################

%------------------------------------------------------------------------
%
% Linéarisation et détermination de Jp et Dp
%
%------------------------------------------------------------------------
%% 3.2.4
x0=15.92;
y0=19.6875;
x1=20.66;
y1=10.8984;
x2=25.4;
y2=4.39453;

T = (-x0+x1-x0+x2)/3
k = 4
eta = 1/k*log(abs(y0)/abs(y2))
xi = eta/pi/sqrt(1+(eta/pi)^2)
omega0 = 2*pi/(T*sqrt(1-xi^2))

Jp = Mb*g*Dm/omega0^2
Dp = 2*xi*omega0*Jp

%------------------------------------------------------------------------
% Commande LQ
%------------------------------------------------------------------------
Te2 = 0.02; % 20ms
% retour d'état
K_lq = [];  % Gain du retour d'état, vecteur (1x2)
M_lq = []; % Gain pour la référence (1x1)

%------------------------------------------------------------------------
% Commande LQI
%------------------------------------------------------------------------
K_lqi = [];  % Gain du retour d'état avec action intégrale, vecteur (1x3)

%------------------------------------------------------------------------
% Observateur
%------------------------------------------------------------------------

Asys = [];% Matrice A modèle linéaire (dynamique)
Bsys = [];% Matrice B modèle linéaire (de Commande)
Csys = [];% Matrice C du modèle linéaire (de Sortie)
L = [];% Gain de l'observateur

%------------------------------------------------------------------------
% Correcteur PID
%------------------------------------------------------------------------
Kp = 1;% Action proportionnelle
Ti = 1; % Action integrale 
Td = 1; % Action derivée
tau_d = 1 ;% Filtage de l'action derivée



