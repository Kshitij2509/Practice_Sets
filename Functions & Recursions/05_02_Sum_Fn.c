// W.R.P. to find sum of two numbers using functions.

#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration

int main()
{
    int c, n1, n2;

    printf("Enter the first number :\n");
    scanf("%d", &n1);
    printf("Enter the value of second number :\n");
    scanf("%d", &n2);

    c = sum(n1, n2); // function call
    printf("The sum of %d and %d is %d\n", n1, n2, c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}