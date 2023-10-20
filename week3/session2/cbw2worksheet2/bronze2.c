//program to calculate volume of sphere when given radius

#include<stdio.h>

float calcvolume(float radius)
{
    float volume = 4.1887902048 * radius * radius * radius;
    return volume;
}

int main()
{
    float radius;
    printf("enter radius of sphere: \n");
    scanf("%f",&radius);
    float volume = calcvolume(radius);
    printf("volume of sphere with radius of %.2f is %.4f\n",radius,volume);
    return 0;
}