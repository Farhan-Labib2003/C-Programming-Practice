#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int k=1;k<=2*(n-i);k++)
        {
            printf(" ");
        }
        for(int j=i;j>0;j--)

        {
            printf("%d",j);
        }
        //nsp-=2;
        printf("\n");
    }
    return 0;
}