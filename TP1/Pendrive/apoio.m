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

%% 2.2.2


