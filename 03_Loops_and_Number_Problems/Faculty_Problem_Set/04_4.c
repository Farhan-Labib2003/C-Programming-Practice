#include<stdio.h>
int main()
{
    int i,n,a=1;
    scanf("%d",&n);
     printf("Before:%d\n",a);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a+=2;
    }
    printf("\nafter:%d",a);

    return 0;
}


