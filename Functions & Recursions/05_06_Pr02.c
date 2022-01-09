// W.R.P. using functions to convert celsius temperature to fahrenheit.

#include <stdio.h>
float Temp(float C);

int main()
{
    float c, f;
    printf("Enter the value of temperature in Celsius :\n");
    scanf("%f", &c);

    printf("The value of temperature in Fahrenheit :%.2f", Temp(c));

    return 0;
}

float Temp(float C)
{
    float F;
    F = (C * 9/5) + 32;
    return F;
}