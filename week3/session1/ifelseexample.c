#include<stdio.h>
int main()
{
    int mark;
    printf("enter mark: \n");
    scanf("%d",&mark);

if(mark >=0 && mark<=100)
{
    if(mark==0)
    {
        printf("mark of %d is a zero\n",mark);
    }else if(mark >70)
    {
        printf("mark of %d is first\n",mark);

    }else if(mark > 60)
    {
        printf("mark of %d is a 2:1\n",mark);
    }else if(mark >40)
    {
        printf("mark of %d is a pass\n",mark);
    }else
    {
        printf("mark of %d is a fail\n",mark);
    }
}else
{
    printf("%d is an invalid mark(must be between 0 and 100)\n",mark);
}
    
return 0;
}