#include<stdio.h>
int main()
{
    int x,y,square;
    printf("Enter the value of 'X':");
    scanf("%d",&x);
    printf("Enter the value of 'Y':");
    scanf("%d",&y);
    while(x!=y)
    {
        square=x*x;
        printf("%d, ",square);
        if(x<y) x++;
        else x--;
    }
    printf("Reached!");
    return 0;
}
