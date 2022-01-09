#include<stdio.h>
#include<math.h>

int main ()
{
  int n, i, j;
  int ch=65;  //65 is used so that it can printf the next alphabetical caracter next time
  printf ("Enter the number of rows : ");
  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%c ", ch++);
	}
      printf ("\n");
    }

  for (i = n - 1; i >= 1; i--)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%c ", ch++);
	}
      printf ("\n");
    }

  return 0;
}