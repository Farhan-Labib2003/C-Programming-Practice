#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=(2*n-1);
    int nst=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(l=1;l<=nst;l++)
        {
            printf("*");
        }
        nsp-=2;
        nst++;
        printf("\n");
    }
    for(m=1;m<=2*n+1;m++)
    {
        printf("*");
    }
    return 0;
}