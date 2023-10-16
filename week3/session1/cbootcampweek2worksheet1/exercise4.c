#include<stdio.h>
int main()
{
    int temp;

    printf("enter temp: ");
    scanf("%d",&temp);

    if((temp>-10)&&(temp<40))
    {
        printf("valid temp");
    }
    else
    {
        printf("invalid temp");
    }

    printf("\n");
    return 0;
}