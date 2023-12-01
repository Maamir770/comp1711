#include<stdio.h>
#include<stdlib.h>
#define numberofstudents 10
#define numberofmodules 3

int main()
{
    int marks[numberofstudents][numberofmodules ];
    char* filename = "marks.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    for(int i=0;i<numberofstudents;i++)
    {
        fscanf(*file, )
    }

}