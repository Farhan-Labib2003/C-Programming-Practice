#include<stdio.h>
int main()
{
    int i,factorial=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        factorial=i*factorial;
        printf("Factorial of %d is : %d\n",i,factorial);
    }

    return 0;
}
