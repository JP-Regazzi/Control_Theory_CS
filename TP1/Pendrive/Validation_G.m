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

% Affichage de la sortie mesurée "omega" et la sortie simulée "omega_mod" 
figure(2)
clf
plot(temps,omega75,'b','LineWidth',2);
hold on
plot(temps,omega_mod75,'r','LineWidth',2);
grid on
%axis([0 3 -10 200]) % zoom sur la figure [xmin xmax ymin ymax]
title('Reponse en vitesse du moteur')
legend('mesure','modèle')
xlabel('Temps (s)')
ylabel('Vitesse (rad/s)')
 
 

 
 
 