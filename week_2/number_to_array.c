#include <stdio.h>
int main()
{
   int n, t, sum = 0, remainder;

    n= 233413;

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;
}