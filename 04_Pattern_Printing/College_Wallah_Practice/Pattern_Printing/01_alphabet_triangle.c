#include<stdio.h>
//A
//AB
//ABC .....
int main()
{
    int i,n,j,a,d;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        a=1;
        for(j=1; j<=i; j++)
        {
            d=64+a;
            char ch=(char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");

    }
    return 0;
}

