#include<stdio.h>
#include<stdlib.h>



int main()
{
    int myarray[2][3] = {{1,4,5},{3,6,9}};
    int arraycopy[2][3] = {{1,4,5},{3,6,9}};
    int transpose[3][2];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            transpose[i][j] = myarray[j][i];
        }
    }
    
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<2;j++)
        {
            printf("%d ",transpose[i][j]);
        }printf("\n");
        
    }
    printf("\n");
    
    return 0;
}