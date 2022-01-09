#include<stdio.h>
int Rev(int num)
{
    int sum = 0;
    while(num != 0)
    {
        sum = sum*10 + num%10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n, rev;
    printf("Enter a positive integer :\n");
    scanf("%d", &n);

    rev = Rev(n);
    printf("Reverse of %d is %d", n, rev);    

    return 0;
}