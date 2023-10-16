#include<stdio.h>
int main()
{
    int a;
    
    printf("enter number: \n");
    scanf("%d",&a);

    switch(a)
    {
        case 0: printf("option 0 has been selected\n"); break;
        case 1: printf("option 1 has been selected\n"); break;
        default: printf("option different has been selected\n"); 
    }

    return 0;
}