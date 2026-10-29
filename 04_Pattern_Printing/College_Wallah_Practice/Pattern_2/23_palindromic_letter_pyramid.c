#include<stdio.h>
int main()
{
    int i,j,k,l,n;
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
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        int a=i-1;
        for(l=1;l<=i-1;l++)
        {
            printf("%c",a+64);
            a--;
        }
        printf("\n");
    }
}
