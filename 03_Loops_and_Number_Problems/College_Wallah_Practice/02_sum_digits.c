//WAP to print sum of a given number
#include<stdio.h>
int main()
{
    int n,sum=0,last_digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;
    }
    printf("The sum: %d ",sum);
    return 0;
}
