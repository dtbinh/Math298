#include <math.h>
main ()     /*  Program 8: Stable Algorithm for Compound Interest */
{
   int n;
   float x,u,v;

   printf("enter input values for x (float) and n (integer) \n");
   scanf("%f  %d", &x, &n );       
   u = x/n;      
   v = log1p(u);
   printf("Alg 4: %e \n", exp(n*v));
}
