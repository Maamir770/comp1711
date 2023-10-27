#include<stdio.h>
int main()
{
 char* filename = "squares.dat";
    FILE *file = fopen (filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int n;
    int number=1;

    printf("enter number of squares you want : \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        fprintf(file,"%d\n", number*number);
        number++;
    }

    fclose(file);
    return 0;
}

