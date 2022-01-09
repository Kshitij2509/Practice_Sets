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
	  printf ("%c ", 65);  // To print B we will use 66 and for C 67 & so on
	}
      printf ("\n");
    }

  for (i = n - 1; i >= 1; i--)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%c ", 65);  // To print B we will use 66 and for C 67 & so on
	}
      printf ("\n");
    }

  return 0;
}
