#include <stdio.h>
int main(){
    int arr[4],b=0;
    for(int i =0;i<5;i++)
    {
        arr[i]= i*i+10;
    }
    
    for(int j=0;j<5;j++)
    {
        b+=arr[j];
    }printf("%d\n",b);
return 0;
}