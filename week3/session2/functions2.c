#include<stdio.h>
float sum(float a, float b);
float sum(float a, float b)
{
    float answer = a + b;
    return answer;
}
int main()
{
    int a;
    float b;

    printf("enter number: \n");
    scanf("%d",&a);

    printf("enter number: \n");
    scanf("%f",&b);

    float c = sum(a,b);
    printf("the sum of %d and %.1f is %.16f\n",a,b,c );
    return 0;
}