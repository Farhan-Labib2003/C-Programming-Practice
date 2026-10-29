#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter the number:");
    scanf("%d",&n);
    int nsp=n-1;
    for(i=1;i<=n;i++)
    {
        int a=i-1;
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp--;
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        //int a=i-1;
        for(l=1;l<=i-1;l++)
        {
            printf("%d",a);
            a--;
        }
        //a--;
        printf("\n");
    }
    return 0;
}
