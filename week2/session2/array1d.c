#include <stdio.h>
int main()
{
    int i, arr[10];

    for (i=0;i<10;i++)
    {
        arr[i] = i*10+i;
    }
    printf("%d and %d\n", *arr, *(arr+1));
    return 0;
     
}