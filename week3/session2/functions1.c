#include<stdio.h>
int sum(int a, int b)
{
    int answer = a + b;
    return answer;
}
int main()
{
    int a,b;
    printf("enter number: \n");
    scanf("%d",&a);
    printf("enter number: \n");
    scanf("%d",&b);
    int c = sum(a,b);
    printf("the sum of %d and %d is %d\n",a,b,c );
    return 0;
}