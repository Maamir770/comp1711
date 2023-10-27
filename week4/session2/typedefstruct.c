#include<stdio.h>
#include<string.h>

typedef struct 
{
    char name[20];
    char studentid[11];
    unsigned mark;
}student;

student printfunction (char* name,char* studentid, unsigned mark)
{
    printf("----------------------------------------\n");
    printf("name of student: %s\n", name);
    printf("student id: %s\n", studentid);
    printf("final mark: %u\n", mark);
}

int main()
{

    // // Predefined data arrays
    // char *names[] = {"Alice", "Bob", "Charlie"};
    // char *ids[] = {"1234567890", "2345678901", "3456789012"};
    // unsigned marks[] = {85, 78, 90};

    // // Populate the student array using a loop
    // for (int i = 0; i < 3; i++) {
    //     strcpy(students[i].name, names[i]);
    //     strcpy(students[i].student_id, ids[i]);
    //     students[i].mark = marks[i];
    // }
    int numberofstudents = 10;
    student students[] =  
    {
        {"Alice Smith",    "64827593", 67},
        {"Bob Johnson",    "19374650", 89},
        {"Charlie Brown",  "82056914", 76},
        {"David Davis",    "45790182", 44},
        {"Eve Wilson",     "36102478", 91},
        {"Frank Anderson", "93571826", 53},
        {"Grace Lee",      "50249867", 78},
        {"Hannah Clark",   "74820591", 62},
        {"Isaac Harris",   "61093745", 89},
        {"Jack White",     "92847501", 72} 
    };  //initialisation
    for(int i = 0; i < numberofstudents; i++)
    {
      printfunction(students[i].name,students[i].studentid,students[i].mark);
    }
    return 0;
}
