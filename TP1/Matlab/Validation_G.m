%--------------------------------------------------------------------------
%
% Validation du modèle dynamique du moteur (G)
%
% entree : tension vp
% sortie : vitesse omega
%
% Les données omega, temps et cmd_vp sont necessaires pour utiliser ce
% fichier
% Il faut resigner les valeurs de Kv et tau du modèle G
%
%--------------------------------------------------------------------------


%------------------------------------------------------------------------
% Paramtres du modèle
%------------------------------------------------------------------------
Kv = [19.5939]; % A completer
tau = [0.18537]; % A completer

% Definition du modèle avec les paramètres Kv et tau
mod_G = tf(Kv,[tau 1]);

% Simulation du modèle "mod_G" avec "cmd_vp" comme vecteur d'éntrée et le vecteur "temps" 
omega_mod = lsim(mod_G,cmd_vp,temps);
 
%{

figure(1)
clf
plot(temps,omega,'b','LineWidth',2);
hold on
grid on
title('Measured vs Modeled Speeds, 6V Input Step')
legend('measure')
xlabel('Time (s)')
ylabel('Speed (rad/s)')

figure(2)
clf
plot(temps,omega,'b','LineWidth',2);
hold on
plot(temps,omega_mod,'r','LineWidth',2);
grid on
title('Measured vs Modeled Speeds, 6V Input Step')
legend('measure','model')
xlabel('Time (s)')
ylabel('Speed (rad/s)')

figure(3)
clf
time_cropped = temps(1:701);
plot(time_cropped,omega25,'b','LineWidth',2);
hold on
plot(time_cropped,omega_mod25,'r','LineWidth',2);
grid on
title('Measured vs Modeled Speeds, 2.5V Input Step')
legend('measure','model')
xlabel('Time (s)')
ylabel('Speed (rad/s)')

%}

% Affichage de la sortie mesurée "omega" et la sortie simulée "omega_mod"
% Figure other omegas 

figure(1)
clf
plot(temps,omega,'b','LineWidth',2);
hold on
grid on
title('Motor Response Speed, 6V Input Step')
legend('measure')
xlabel('Time (s)')
ylabel('Speed (rad/s)')
 