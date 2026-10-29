#include<stdio.h>
int main()
{
    int i,n,a,b,sum;
    a=1;
    b=1;
    sum=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1; i<=n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The %dth term fibonacci is: %d",n,sum);
    return 0;
}
