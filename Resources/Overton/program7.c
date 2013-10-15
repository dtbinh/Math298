#include <math.h>
main ()     /*  Program 7: Compound Interest */
{
   int n,i;
   float x,z,w,v;

   printf("enter input values for x (float) and n (integer) \n");
   scanf("%f  %d", &x, &n );       
   z = 1 + x/n;
   w = 1;
   for (i=0; i<n; i++) {
      w = w*z;
   }
   v = log(z);
   printf("Alg 1: %e \n", w);
   printf("Alg 2: %e \n", pow(z,n));
   printf("Alg 3: %e \n", exp(n*v));
}
