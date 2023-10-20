//program to calculate area of circle when given radius

#include<stdio.h>
float circlearea(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}

int main()
{
    float radius;
    printf("enter radius: \n");
    scanf("%f",&radius);

    float area = circlearea(radius);

    printf("area of circle with radius of %.2f is %.4f\n", radius, area);
    return 0;


}