#include <stdio.h>
#include <math.h>

int main()
{
  int n, i, j;
  int ch = 1; // 1 is used to print the numbers in series like the alphabetical character
  printf("Enter the number of rows : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", ch++);
    }
    printf("\n");
  }

  for (i = n - 1; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", ch++);
    }
    printf("\n");
  }

  return 0;
}