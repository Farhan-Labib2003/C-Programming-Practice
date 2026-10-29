#include<stdio.h>
//***
//**
//*
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}
