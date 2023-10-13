#include<stdio.h>
#include<string.h>
int main(){
    char mystring[] = "hello";
    int length = strlen(mystring);
    for(int i = length-1;i>=0;i--){
        printf("%c",mystring[i]);
    }
    printf("\n%d\n",mystring[length]);
    return 0;
}