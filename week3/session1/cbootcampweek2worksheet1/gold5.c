#include<stdio.h>
int main()
{
    int x,y=0;

    
        
    
while(y==0)
{

printf("enter a number betwen 1 and 5: ");
scanf("%d",&x);


switch (x)
    {
    case 1: printf("option 1 has been selected\n"); y=1;
    break;

    case 2: printf("option 2 has been selected\n");y=1;
    break;

    case 3: printf("option 3 has been selected\n");y=1;
    break;

    case 4: printf("option 4 has been selected\n");y=1;
    break;

    case 5: printf("option 5 has been selected\n");y=1;
    break;
    
    default: printf("invalid input\n");
        
    }
}
 
printf("\n");
return 0;
   
}