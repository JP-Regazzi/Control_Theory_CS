%% 2.2.1

xi=0.7;
w0=22;

p=[-xi*w0-1i*w0*sqrt(1-xi^2),-xi*w0+1i*w0*sqrt(1-xi^2)];

tau=0.18537;
kv=19.5939;
A=[-1/tau 0;
    1 0];
B1=[kv/tau; 0];
Ka = place(A, B1, p)
Kw = Ka(1);
Kz = Ka(2);
Te1 = 0.002;

%% 2.2.2


