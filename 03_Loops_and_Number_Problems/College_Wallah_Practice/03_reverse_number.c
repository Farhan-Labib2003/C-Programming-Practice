//WAP to print reverse of a given number
#include<stdio.h>
int main()
{
    int n,r=0,l_d;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        l_d=n%10;
        r=r*10;
        r=r+l_d;
        n=n/10;
    }
    printf("Reversed number: %d",r);
    return 0;
}
