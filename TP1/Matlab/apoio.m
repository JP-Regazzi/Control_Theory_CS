%% 2.2.1
sim('inicio_do_sistema')

figure(1);
plot(tout, whref, tout, wh);
title("wh and wh,ref")
legend("wh,ref", "wh")
xlabel("time[s]")
ylabel("w[rads/s]")
grid("on")

figure(2);
plot(tout,vp);
title("vp limits analyses")
xlabel("time[s]")
ylabel("vp[V]")
grid("on")
yline(24);
yline(-24);

%% 3.2.3
figure(3);
plot(temps, theta);
title("Free response \theta(0)=30°")
xlabel("time[s]")
ylabel("theta[rad]")
grid("on")

%% 3.2.4
%(foi para o init)

%% 3.2.5
A = [0 1;-Mb*g*Dm/Jp -Dp/Jp];
B = [0; Dt/Jp];
C = [1 0];
D = [0];
XIN = [30; 0];

sys = ss(A,B, C, D);
[Y,t] = initial(sys, XIN);

temps0=temps - 11.22;

figure(5)
plot(t,Y, temps0,theta)
title("Free response \theta(0)=30° comparison")
xlabel("time[s]")
ylabel("theta[rad]")
legend("Model response","Real response")
grid("on")

%% 4.2.2
Qc = [B, A*B]
rank(Qc)

%% 4.2.3
run("InitCommande_Aero")
Te1 = 0.0005;
sim("SimulateurNL_AERO_Cmd_LQ")

%% 4.2.4
run("InitCommande_Aero")
Te1 = 0.0005;
sim("SimulateurNL_AERO_Cmd_LQI")

%% 5.1
run("InitCommande_Aero")
load("DATA/5.1.mat")

temps_fixed = temps(1:10:7501);

figure(1)
subplot(1,2,1);
plot(temps_fixed,theta, temps_fixed,theta_ref)
title("LQ real control without integrator")
xlabel("time[s]")
ylabel("\theta[rad]")
legend("\theta","\theta_{ref}")
grid("on")
subplot(1,2,2);
plot(temps,omega_ref)
xlabel("time[s]")
ylabel("\omega_{ref} [ras/s]")
grid("on")

Te1 = 0.0005;
sim("SimulateurNL_AERO_Cmd_LQ")

figure(2)
plot(temps_fixed,theta, temps_fixed,theta_ref, temps_sim(1:5000*15/25+1), theta_sim(1:5000*15/25+1))
title("LQR comparison")
xlabel("time[s]")
ylabel("\theta[rad]")
legend("physic \theta","\theta_{ref}", "sim \theta")
grid("on")

%% 5.2
run("InitCommande_Aero")
load("DATA/5.2.mat")

temps_fixed = temps(1:10:7501);

figure(1)
subplot(1,2,1);
plot(temps_fixed,theta, temps_fixed,theta_ref)
title("LQ real control without integrator")
xlabel("time[s]")
ylabel("\theta[rad]")
legend("\theta","\theta_{ref}")
grid("on")
subplot(1,2,2);
plot(temps,omega_ref)
xlabel("time[s]")
ylabel("\omega_{ref} [ras/s]")
grid("on")

Te1 = 0.0005;
sim("SimulateurNL_AERO_Cmd_LQI")

figure(2)
plot(temps_fixed,theta, temps_fixed,theta_ref, temps_sim(1:5000*15/25+1), theta_sim(1:5000*15/25+1))
title("LQI simulator and phisical system comparison")
xlabel("time[s]")
ylabel("\theta[rad]")
legend("physical \theta","\theta_{ref}", "sim \theta")
grid("on")

thetaI = theta;
load("DATA/5.1.mat")

figure(3)
plot(temps_fixed, theta, temps_fixed, thetaI, temps_fixed, theta_ref)
title("LQR and LQI comparison")
xlabel("time[s]")
ylabel("\theta[rad]")
legend("LQR \theta", "LQI \theta", "\theta_{ref}")
grid("on")

