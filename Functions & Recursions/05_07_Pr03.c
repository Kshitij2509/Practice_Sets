//W.R.P. to calculate force of attraction on a body of mass mexerted by earth.

#include <stdio.h>
float Force(float mass);

int main()
{
    int m;
    printf("Enter thr mass of body in kg :\n");
    scanf("%d", &m);

    printf("The value force in Newton is %.2fN", Force(m));

    return 0;
}

float Force(float mass)
{
    float result = mass * 9.8;
    return result;
}