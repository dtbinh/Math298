main()   /* Program 3: Second Loop Program */
{
   int n = 0;
   float x = 1, y = 2;

/* Repeatedly divide x by 2 until y = (1 + x) rounds to 1 */

   while (y > 1) {
      x = x/2;
      y = 1 + x;
      n++;
      printf("1 added to (2 raised to the power -%d) = %e \n", n, y);
   }
}
