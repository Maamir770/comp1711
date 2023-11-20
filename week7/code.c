#include "utilities.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    // array of daily readings
    reading daily_readings[100];

    char line[buffer_size];
    char filename[buffer_size];

    // get filename from the user
    printf("Please enter the name of the data file: ");

    // these lines read in a line from the stdin (where the user types)
    // and then takes the actual string out of it
    // this removes any spaces or newlines.
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    char choice;
    int counter = 0;
    float mean = 0;

    FILE *input = open_file(filename,"r");

    while (1)
    {
        printf("A: View all your blood iron levels\n");                       // BRONZE
        printf("B: View your average blood iron level\n");                    // BRONZE
        printf("C: View your lowest blood iron level\n");                     // SILVER
        printf("D: View your highest blood iron level\n");                    // SILVER
        printf("E: View the blood iron levels for a specific month\n");       // SILVER/GOLD
        printf("F: See some additional statistics about your iron levels\n"); // GOLD - see readme.md
        printf("G: Generate a graph of your iron levels\n");                  // GOLD/PLATINUM - see readme.md
        printf("Q: Exit the program\n");

        // get the next character typed in and store in the 'choice'
        choice = getchar();

        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n');


        // switch statement to control the menu.
        switch (choice)
        {
        // this allows for either capital or lower case
        case 'A':
        case 'a':
            counter = read_file(line, input, daily_readings);
            for (int i = 0; i < counter; i++)
            {
                printf("%s - Blood iron: %.1f\n", daily_readings[i].date, daily_readings[i].bloodIron);
            }
            fclose(input);
            break;

        case 'B':
        case 'b':
            counter = read_file(line, input, daily_readings);
            mean = find_mean(daily_readings, counter);
            printf("Your average blood iron was %.2f\n", mean);
            fclose(input);
            break;

        case 'C':
        case 'c':
            counter = read_file(line, input, daily_readings);
            float highestreading = find_highest(daily_readings, counter);
            printf("Highest Blood Iron reading was %.2f\n", highestreading);
            fclose(input);
            break;

        case 'D':
        case 'd':
            counter = read_file(line, input, daily_readings);
            float lowestreading = find_lowest(daily_readings, counter);
            printf("lowest Blood Iron read was %.2f\n", lowestreading);
            fclose(input);
            break;

        case 'E':
        case 'e':
            printf("which months blood readings do you want to see?\n");
            char month[3];
            scanf("%s", month);
            counter = read_file(line, input, daily_readings);
            for(int i=0;i<counter;i++)
            {
                char *p;
                p = strstr(daily_readings[i].date, month);
                if(p)
                {
                    printf("%s,%.2f\n", daily_readings[i].date,daily_readings[i].bloodIron);
                }
            }
            fclose(input);
            return 0;
            break;

        case 'F':
        case 'f':
            return 0;
            break;

        case 'G':
        case 'g':
            return 0;
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        // if they type anything else:
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}