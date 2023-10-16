#include<stdio.h>
int main()
{
    int mark;
    while (!((mark>=0)&&(mark<=100)))
    {
    printf("enter mark: \n");
    scanf("%d",&mark);
    }

    if(mark>70)
    {
        printf("distinction");
    }
    else if(mark>50)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }

    printf("\n");
    return 0;
}