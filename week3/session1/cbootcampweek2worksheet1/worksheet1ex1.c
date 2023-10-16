#include<stdio.h>
int main()
{
    int number;
    printf("enter number: \n");
    scanf("%d",&number);

    if(number == 0)
    {
        printf("number is 0");
    }
    else if(number >0)
    {
        printf ("number is greater than zero");
    }
    else
    {
        printf("number is less than 0");
    }

    printf("\n");
    return 0;
}