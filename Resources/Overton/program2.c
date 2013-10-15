main()   /* Program 2: First Loop Program */
{
   int n = 0;
   float x = 1;

/* Repeatedly divide x by 2 until it underflows to 0 */

   while (x > 0) {
      x = x/2;
      n++;
      printf("(2 raised to the power -%d) = %e \n", n, x);
   }
}
