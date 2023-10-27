#include<stdio.h>
#include<string.h>


typedef struct 
{
    double xcoord;
    double ycoord;
}point;

int main()
{
    point points[] = {};
    for(int i=0; i<10; i++)
    {
        points[i].xcoord = 34.66;
        points[i].ycoord = 23.55;
    }

    for (int j=0;j<10;j++)
    {
        printf("coord: %.2f,%.2f\n",points[j].xcoord,points[j].ycoord);
    }
return 0;
}
