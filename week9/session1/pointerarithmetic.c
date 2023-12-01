#include<stdio.h>

int main()
{
    int vector[5] = {11,13,17, 23 , 31};

    int* address = vector;

    int count=0;
    while(count<3)
    {
        printf("\n address[%d] = %d\n", count, *(address++));
        count++;
    }
}