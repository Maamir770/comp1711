#include<stdio.h>
int main()
{
    int number;
    printf("enter number: \n");
    scanf("%d",&number);

    if((number%4==0) && (number%5==0))
    {
        printf("number is divisible by 4 and 5\n");
    }
    else if(number%4==0)
    {
        printf("only divisible by 4\n");
    }
     else if(number%5==0)
    {
        printf("only divisible by 5\n");
    }
    else
    {
        printf("number not divisible by 4 or 5");
    }

    return 0;
}