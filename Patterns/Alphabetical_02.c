#include<stdio.h>
#include<math.h>

int main ()
{
  int n, i, j;
  int ch=64;   //ch=64 since 1 will be added and to print A we want 65 
  printf ("Enter the number of rows : ");
  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%c ", (ch+i));  //i can be replaced by j for changing rows & columns in the pattern obtained
	}
      printf ("\n");
    }

  for (i = n - 1; i >= 1; i--)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("%c ", (ch+i));
	}
      printf ("\n");
    }

  return 0;
}