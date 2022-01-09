// W.R.P. using recursion to calculate nth element of fibonacci series.

#include<stdio.h>
int Fib(int n);

int main()
{
    int a, i;
    printf("Enter the number of terms :\n");
    scanf("%d", &a);

    printf("Fibonacci series :\n");
    for(i=0; i<=a; i++)  {
    printf("%d\t", Fib(i));
    i++;
    }

    return 0;
}

int Fib(int n)
{
    if(n==0 || n==1)  {
        return n;
    }
    else {
    return (Fib(n-1) + Fib(n-2));
    }
}