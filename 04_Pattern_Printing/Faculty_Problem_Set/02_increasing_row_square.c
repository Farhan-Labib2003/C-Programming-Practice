#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n+i;j++)
        {
            printf("%d ",j);
        }
        //a++;
        printf("\n");
    }
    return 0;
}