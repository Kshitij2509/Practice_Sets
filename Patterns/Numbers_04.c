#include<stdio.h>
#include<math.h>

int main ()
{
  int n, i, j;
  int ch=1;  
  printf ("Enter the number of rows : ");
  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%02d ", ch++);  //%02d is used for inserting 0 before a single digit number
	}
      printf ("\n");
    }

  for (i = n - 1; i >= 1; i--)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%02d ", ch++);  //%02d is used for inserting 0 before a single digit number
	}
      printf ("\n");
    }

  return 0;
}