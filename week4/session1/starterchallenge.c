#include<stdio.h>

int main()
{
    int array[10];
    int sum=0;

    for(int i=0;i<10;i++)
    {
        printf("enter number: \n");
        scanf("%d",&array[i]);
        sum += array[i];
    }

    float mean = sum /10;

    printf("mean of the 10 numbers is %f\n",mean);
    return 0;
}