// W.R.P. to find average of three numbers.

#include<stdio.h>
float Average(int a, int b, int c);

int main()
{
    int x, y, z;
    printf("Enter three numbers :\n");
    scanf("%d%d%d", &x, &y, &z);

    printf("The average of three numbers = %.2f", Average(x, y, z));

    return 0;
}

float Average(int a, int b, int c)
{
    float result;
    result = (float)(a+b+c)/3;
    return result;
}