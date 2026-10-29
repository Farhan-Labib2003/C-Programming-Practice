#include<stdio.h>
int main() {
   int A,B,C,temp;
   A=10;
   B=20;
   C=30;
   temp=10;
   printf("Before swap:\nA=%d B=%d C=%d\n",A,B,C);
   A=C;
   C=B;
   B=temp;
   temp=B;
   printf("After swap:\nA=%d B=%d C=%d",A,B,C);


   return 0;



}
