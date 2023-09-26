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
A = [-1/tau 0; 1 0]; 
B1 = [Kv/tau ; 0]; 
B2 = [0 ; -1]; 
B = [B1, B2];
C = [1 0;0 1]; 
D = [0 0;0 0]; 

% Retour d'état (2.2.1)
xi = 0.7;
w0 = 22;
p = [w0*(-xi-1i*sqrt(1-xi^2)) w0*(-xi+1i*sqrt(1-xi^2))]';

Ka = place(A, B1, p); % Gain du retour d'état, vecteur (1x2) à calculer avec "place"
Kw = Ka(1); % Gain pour la vitesse, x1 = wh
Kz = Ka(2); % Gain pour l'action intégrale, w2 = z 

sys=ss(A-B1*Ka,B,C,D);
y=step(sys);
plot()

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
Kt = []; % à compléter

%------------------------------------------------------------------------
%
% Linéarisation et détermination de Jp et Dp
%
%------------------------------------------------------------------------
Jp =  []; % à compléter
Dp =  []; % à compléter


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



