#include<stdio.h>
int main()
{
    int a,b ;

    for(b=0, a=1; b<10; b++, a+=2)
    {
        printf("%d ", a);
    }printf("\nfirst %d odd numbers have been printed ", b);

    return 0;
}