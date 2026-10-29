#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=n-1;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp--;
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
