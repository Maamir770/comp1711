#include<stdio.h>
int main()
{
    int x,y;

    while(x!=-1)
    {
        printf("ENTER NUMBER: \n");
        scanf("%d",&x);

        if(( (x>0) && (x<100) )|| (x==-1))
        {
            printf("validated\n");
            break;
        }
        else
        { 
            printf("invalid input\n");
        }

    }
    if(x==-1) printf("program terminated\n");
    
    return 0;
}