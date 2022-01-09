/* W.R.P. using functions to print the following pattern (first bn lines)
 *
 * * *
 * * * * *                                                                */

#include <stdio.h>
void Pattern(int n);

int main()
{
    int n;
    printf("Enter the number of terms :\n");
    scanf("%d", &n);

    Pattern(n);

    return 0;
}
// 1 - 1
// 2 - 3
// 3 - 5
// 2n - 1
void Pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    else
    {
        Pattern(n - 1);
        for (int i = 0; i < (2*n - 1); i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}