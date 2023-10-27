#include <stdio.h>
#include<stdlib.h>

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    int linecounter=0;
    int numarray[1000];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
        numarray[linecounter] = atoi(line_buffer);
        linecounter++;
    }

    printf("number of lines: %d\n",linecounter);

    fclose(file);
    return 0;
}