#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=n;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a--;
        }
        
        printf("\n");
    }
    return 0;
}