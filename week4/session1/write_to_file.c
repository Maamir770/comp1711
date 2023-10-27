#include <stdio.h>
#include<stdlib.h>

int main()
{
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    char* number;
    int num_lines;
    int sum=0;
    float mean;

    printf("how many numbers do you want to enter? \n");
    scanf("%d",&num_lines);
    
    printf("Type %d numbers: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%s", number);
        fprintf(file, "%s\n", number);
        sum +=atoi(number);
    }

    mean = sum / num_lines;
    fprintf(file, "%f\n", mean);

    fclose(file);
    return 0;
}