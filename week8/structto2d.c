#include<stdio.h> 
#define numberofstudents 4
#define numberofmodules 3

typedef struct
{
    char name[50];
    int id;
    float gpa;
    int procprog;
    int introtoprog
    int os;
}student;

int main()
{
student students[numberofstudents] = 
{
    {"alex turner", 2306456, 3.5, 78, 82, 89},
    {"bob williams", 2385679, 3.9, 100, 85, 92},
    {"sophia mendes", 2374068, 3.7, 93, 90, 87},
    {"laura cerroni", 2398452, 3.2, 65, 70, 80}  
};

int gradesarray[numberofstudents][numberofmodules];

for(int i=0;i<numberofstudents;i++)
{
   gradesarray[i][0] = students[i].procprog;
   gradesarray[i][1] = students[i].introtoprog;
   gradesarray[i][2] = students[i].os;
}

printf("grades:\n");
for(int k=0;k<numberofstudents;k++)
{

}
return 0;

}