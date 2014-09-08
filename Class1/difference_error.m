x = 1.0; h = 1.0; n = 1;

deriv = cos(x);

while n <= 20;
    h = h/10;
    diffquo = (sin(x+h) - sin(x))/h;
    error   = abs(cos(x) - diffquo);
    fprintf('%5.1e %13.6e %13.6e \n', h, diffquo, error);
    n = n + 1;
end