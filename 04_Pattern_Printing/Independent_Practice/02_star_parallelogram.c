#include<stdio.h>
int main()
{
    int i,n,j,a,k;
    scanf("%d",&n);
    a=n-1;
    for(i=1;i<=n;i++){
        for(k=1;k<=a;k++){
            printf(" ");
            
        }
        a--;
        for(j=1;j<=n;j++){
             printf("*");
              
        }
        printf("\n");
    }
    return 0;
}
