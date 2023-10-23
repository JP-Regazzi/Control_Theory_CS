%% 2.2.1
sim('incio_do_sistema')

figure(1);
tout_new = tout - 1;
plot(tout_new , whref, tout_new , wh);
title("Speed vs Reference Signal")
legend("\omega_{h}^{ref}", "\omega_{h}")
xlabel("Time (s)")
ylabel("\omega(rads/s)")
xlim([0, 1])
grid("on")

%{
figure(2);
plot(tout,vp);
title("vp limits analyses")
xlabel("time[s]")
ylabel("vp[V]")
grid("on")
yline(24);
yline(-24);
%}

%% 2.3.1AA
figure(3)
plot(temps, omega_ref, temps, omega);
title("Speed vs Reference Signal")
legend("\omega_{h}^{ref}", "\omega_{h}^{experiment}")
xlabel("Time (s)")
ylabel("\omega(rad/s)")
xlim([0, 1])
grid("on")

%% 2.3.1AB

figure(4)
new_temps = temps(1:500)
new_omega_ref = omega_ref(1:500)
new_omega = omega(1:500)
new_wh = wh(501:1000)
plot(new_temps, new_omega_ref, new_temps, new_omega, new_temps, new_wh);
title("Experiment vs Simulation Performances")
legend("\omega_{h}^{ref}", "\omega_{h}^{experiment}", "\omega_{h}^{simulation}")
xlabel("Time (s)")
ylabel("\omega(rad/s)")
xlim([0, 1])
grid("on")

%% 2.3.1B
figure(3)
plot(temps, omega_ref, temps, omega);
title("Speed vs Reference Signal, Sampling Period 50ms")
legend("\omega_{h}^{ref}", "\omega_{h}")
xlabel("Time (s)")
ylabel("\omega(rad/s)")
grid("on")

%% 3.2.3
figure(6);
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

figure(7)
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