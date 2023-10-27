#include <stdio.h>
#include <stdlib.h> // Defines exit().

FILE *open_file(char *filename, char *mode)
{
    FILE *file = fopen(filename, mode);
    if (file == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    return file;
}

int main()
{
    char *filename = "data.txt";
    FILE *file = open_file(filename, "r");

    //buffer size is length of line (no. of characters)
    //linebuffer is a string which will hold each line and made the same size as the buffer size
    int buffer_size = 100;
    char line_buffer[buffer_size];

    //fgets reads line file by file, while there is still stuff in the file, with a max of [buffersize] characters
    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        printf("%s", line_buffer);
    }

    fclose(file);
    return 0;
}