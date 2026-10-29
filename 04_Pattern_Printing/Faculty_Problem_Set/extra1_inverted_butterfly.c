#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(int m=1; m<=2*n+1; m++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=nst; j++)
        {
            printf("*");
        }
        for(int k=1; k<=nsp; k++)
        {
            printf(" ");
        }
        for(int l=1; l<=nst; l++)
        {
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}