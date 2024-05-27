//assignment operator: +=,-=,*=,/=,%=
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    printf("Num1=%d \n num2=%d",num1,num2);
    num1+=num2;  //num1=num1+num2;
    printf("\n Num1=%d",num1);
    num1-=10;
    printf("\n Num1=%d",num1);
    num2*=20;
    printf("\n Num2=%d",num2);
    num1/=2;
    printf("\n Num1=%d",num1);
}