#include <stdio.h>
#include <math.h>

int main()
{
  int n, i, j;
  printf("Enter the number of rows : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", i); // Replace i with j to change rows & columns in pattern obtained
    }
    printf("\n");
  }

  return 0;
}
