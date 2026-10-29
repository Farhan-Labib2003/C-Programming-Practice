#include<stdio.h>
int main()
{
    int num,hour;
    float payment,payment_h;
    scanf("%d",&num);
    scanf("%d",&hour);
    scanf("%f",&payment_h);
    payment=hour*payment_h;
    printf("NUMBER = %d\nSALARY = U$%.2f",num,payment);
    return 0;

}
