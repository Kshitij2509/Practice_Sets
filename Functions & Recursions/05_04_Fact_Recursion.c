// W.R.P. to find factorial of number using recursion.

#include<stdio.h>
int factorial(int x);

int main()
{
    int n;
    printf("Enter the number whose factorial is to be calculated :\n");
    scanf("%d", &n);

    printf("The value of factorial %d is %d", n, factorial(n));

    return 0;
}

int factorial(int x)
{
    if(x==1 || x==0)  {
        return 1;
    }
    else {
        return x * factorial(x-1);
    }
}