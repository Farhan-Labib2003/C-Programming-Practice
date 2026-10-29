#include<stdio.h>
int main()
{
    int n,i,sum=0,digit=2,product=1;
    printf("Enter the number of terms you want:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        product=i*i*digit;
        sum=sum+product;
        digit+=1;
    }

    printf("Result:%d",sum);
    return 0;
}
