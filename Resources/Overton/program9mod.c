
#include <math.h>
main()  /* Program 9: Compute exp(x) from its Taylor series */
{
   int n;
   float x, term, oldsum, newsum;

   printf("Enter x \n");
   scanf("%e", &x);
   n = 0;
   oldsum = 0.0;
   newsum = 1.0;
   term = 1.0;
   /* terminates when the new sum is no different from the old sum */
   while (newsum !=oldsum){ 
     oldsum = newsum;
     n++;
     term = term*x/n;    /* term has the value (x^n)/(n!) */
     newsum = newsum + term;  /* approximates exp(x) */
     printf("n = %3d   term = %13.6e   newsum = %13.6e \n", 
             n,term,newsum);
   }
   printf("From summing the series,     exp(x)=%e \n", newsum);
   printf("Using the standard function, exp(x)=%e \n", exp(x));
   printf("One over the sum=%e \n", 1/newsum);
   printf("Call to exp(-x) =%e \n", exp(-x));
}

