#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            //for i=1 and j=1
            // if(i%2!=0||j%2!=0||i==j) printf("%d",a);
            // if(a==1) a=0;
            // else a=1;
            if((i+j)%2==0) printf("1");
            else printf("0");

        }
        printf("\n");
    }
    return 0;
}