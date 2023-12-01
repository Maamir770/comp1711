#include<stdio.h>
#include<stdlib.h>

void prank_one()
{
    printf("first prank\n");
}

void prank_two()
{
    printf("second prank\n");
}

int main()
{
    void(*function_variable)();
    function_variable = prank_one;

    function_variable();

    function_variable = prank_two;

    function_variable();
}