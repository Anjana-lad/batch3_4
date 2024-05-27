//arithmetic operator:- +,-,/,*,%
#include<stdio.h>
int main(){
    int num1,num2,rec;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    rec=num1+num2;
    printf("\nResult=%d",rec);
    rec=num1-num2;
    printf("\nResult=%d",rec);
    rec=num1*num2;
    printf("\nResult=%d",rec);
    rec=num1/num2;
    printf("\nResult=%d",rec);
    rec=num1%num2;
    printf("\nResult=%d",rec);
}
