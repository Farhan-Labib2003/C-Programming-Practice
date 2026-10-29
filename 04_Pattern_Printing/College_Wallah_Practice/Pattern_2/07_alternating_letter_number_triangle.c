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
            if(i%2==0) printf("%c ",j+64);
            else printf("%d ",j);

        }
        printf("\n");
    }
    return 0;

}
