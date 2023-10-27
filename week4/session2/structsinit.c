#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    char student_id[11]; //upto 10 digits
    unsigned mark;
};

int main()
{
    struct student newstudent = {"name surname"};
    strcpy(newstudent.student_id, "2027760278");
    newstudent.mark = 35;
    //scanf("%u",newstudent.mark);
    printf("name of student: %s\n", newstudent.name);
    printf("student id : %s\n", newstudent.student_id);
    printf("final mark: %u\n", newstudent.mark);
    return 0;
}