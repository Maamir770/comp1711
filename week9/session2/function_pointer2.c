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

void wrapper(void (*function)())
{
    function();
}

int main()
{
    char choice;
    printf("enter choice of prank (1 or 2)\n");
    scanf("%c",&choice);

    switch(choice)
    {
        case '1': 
            wrapper(prank_one);
            break;
        case '2':
            wrapper(prank_two);
            break;

    }
}