%% 2.2.1
figure(1);
plot(tout, whref, tout, wh);
title("wh e wh,ref")
legend("wh,ref", "wh")
xlabel("time[s]")
ylabel("w[rads/s]")
grid("on")

figure(2);
plot(tout,vp);

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