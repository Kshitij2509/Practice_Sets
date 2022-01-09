#include <stdio.h>
int main()
{
  int n, i, j, space; // n=Total no. of rows, i=rows, j=symbol
  printf("Enter the number of rows : ");
  scanf("%d", &n);

  for (i = n - 1; i >= 1; i--)
  {
    // print the space
    for (space = 1; space <= (n - i); space++)
      printf(" "); // Write anything other than the space if you want to replace space with some no. or alphabet

    // print the symbol
    for (j = 1; j <= ((2 * i) - 1); j++)
      printf("*"); // Replace * with any number or alphabet to print that instead of *

    printf("\n");
  }

  return 0;
}
