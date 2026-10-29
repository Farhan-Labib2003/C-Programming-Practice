#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nst=n-1;
    for(i=1;i<=n;i++)
    {
        for(int k=1;k<=nst;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        nst--;
        printf("\n");
    }
    return 0;
}