#include<stdio.h>
int main()
{
    int i,n,a=1,b=1,next;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }

    return 0;
}

