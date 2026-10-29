#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(i=1;i<=n;i++)
    {
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
        if(i<n/2+1)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }

        
        printf("\n");
    }
    return 0;
}