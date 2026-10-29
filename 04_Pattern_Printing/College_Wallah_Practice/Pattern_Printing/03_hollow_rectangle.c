#include<stdio.h>
//Hollow rectangle
int main()
{
    int i,j,row,coloumns;
    printf("Enter the number of row:");
    scanf("%d",&row);
    printf("Enter the number of coloumns:");
    scanf("%d",&coloumns);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=coloumns;j++)
        {
            if(i==1||i==row||j==1||j==coloumns)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

