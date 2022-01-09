#include <stdio.h>
void fibonacciSeries(int n)
{
   int a = 0, b = 1, c;
   for (int i = 0; i < n; i++)
   {
      printf("%d\t", a);
      c = a + b;
      a = b;
      b = c;
   }
}
int main()
{
   int limit;
   printf("Enter the number of terms :\n");
   scanf("%d", &limit);
   printf("The fibonacci series is: \n");
   fibonacciSeries(limit);
   return 0;
}
