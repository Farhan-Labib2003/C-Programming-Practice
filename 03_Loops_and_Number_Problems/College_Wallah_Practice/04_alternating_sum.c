//Print the sum of this series:1-2+3-4+5-6+7.......  upto 'n'.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0) sum=sum+i;
        else sum=sum-i;
    }
    printf("The Sum: %d",sum);
    return 0;

}
