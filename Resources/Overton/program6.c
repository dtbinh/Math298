#include <math.h>
main ()     /*  Program 6: Function Evaluation */
{
   int funcode;                        /* function code */
   float xS;                           /* IEEE single */
   double xD, fxS, fxD, relerr, cond;  /* IEEE double */

   printf("enter 1 for exp, 2 for log, 3 for sin ");
   scanf("%d", &funcode);
   printf("enter an input value \n");
   scanf("%lf", &xD);       /* read using double format */
   xS = xD;                 /* force single format */
   switch (funcode) {
      case 1: fxS = exp(xS); fxD = exp(xD); 
                             cond = fabs(xD); break;
      case 2: fxS = log(xS); fxD = log(xD); cond = 
                             fabs(1/log(xD)); break;
      case 3: fxS = sin(xS); fxD = sin(xD); 
                             cond = fabs(xD/tan(xD)); break;
   }
   printf("funcode %d\n", funcode);
   printf("xS = %22.15e   f(xS) = %22.15e \n", xS, fxS);
   printf("xD = %22.15e   f(xD) = %22.15e \n", xD, fxD);
   /* relative error */
   relerr = fabs((fxD - fxS)/fxD);
   /* approximate number of digits they are in agreement */
   printf("relative error   = %e   ", relerr);
   printf("approx digits agreeing = %2.0f\n", -log10(relerr));
   /* log base 10 of condition number */
   printf("condition number = %e   ", cond);
   printf("log10 condition number = %2.0f\n", log10(cond));
}
