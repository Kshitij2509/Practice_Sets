#include<stdio.h>
#include<math.h>

int main ()
{
  int n, i, j;
  printf ("Enter the number of rows : ");
  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%d ", j);  //Replace j with i to change the rows & columns in the pattern obtained
	}
      printf ("\n");
    }

  for (i = n - 1; i >= 1; i--)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%d ", j);  //Replace j with i to change the rows & columns in the pattern obtained
	}
      printf ("\n");
    }

  return 0;
}
