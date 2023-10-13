#include <stdio.h>
int main(){
    int a,i,b=1;

    printf("enter integer: ");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        b*=i;
    }

    printf("factorial of %d is %d\n", a, b);
    return 0;
}

