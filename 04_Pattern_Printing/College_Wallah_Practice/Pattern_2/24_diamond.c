#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=n/2;
    int a=1;
    int ml=n/2+1;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        //nsp--;
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        if(i<ml)
        {
            nsp--;
            a+=2;
        }
        else
        {
            nsp++;
            a-=2;
        }
        printf("\n");
    }
    return 0;
}

