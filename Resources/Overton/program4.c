main() /* Program 4: Parallel Resistance Formula */
{
   float r1,r2, total;

   printf("Enter the two resistances \n");
   scanf("%f %f", &r1, &r2);  /* input the resistances of the two
                                resistors connected in parallel */
   printf("r1 = %e    r2 = %e \n", r1, r2);
   total=1 / (1/r1 + 1/r2); /* formula for total resistance */
   printf("Total resistance is %e \n",total);
}
