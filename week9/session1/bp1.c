#include<stdio.h>

int add_to_number(int num)
{
    return num+10;
}

int main()
{
    //makes a new int called 'var' with value 10
    int var = 10;
    
    //creates int pointer called 'varaddress' and sets it to address of 'var'
    int* varaddress = &var;

    printf("content of \"var\" = %d\n", var);

    printf("content of \"varaddress\" = %p\n", varaddress);

    printf("now using pointer! content of \"varaddress\" = %d\n", *varaddress);

    printf("\n");

    return 0;
}