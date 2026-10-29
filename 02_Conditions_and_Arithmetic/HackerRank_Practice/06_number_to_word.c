#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1&&n<=9){
        if(n==1) printf("One");
        if(n==2) printf("Two");
        if(n==3) printf("Three");
        if(n==4) printf("Four");
        if(n==5) printf("Five");
        if(n==6) printf("Six");
        if(n==7) printf("Seven");
        if(n==8) printf("Eight");
        if(n==9) printf("Nine");
    }
    else printf("Greater than 9");
    return 0;
}