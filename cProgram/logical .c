//logical operator: and=&&,or=||,not=!
//binary: 2^0,2^1,2^2,2^3
    // 0:  0 0 0 0
    // 1:  0 0 0 1
    // 2: 0 0 1 0

    // logical and &&'
    // A   B  &&   ||   !
    // 0   0  0    0   0==1
    // 0   1  0    1   1==0
    // 1   0  0    1
    // 1   1  1    1
#include<stdio.h>
int main(){
    int num1,num2,res,num3;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    res=(num1>num2) &&(num1!=0);
    printf("Logical and:%d",res);
    res=(num1>num2) ||(num1!=0);
    printf("\n Logical OR:%d",res);
    res= ~num1;
    printf("NOt=%d",res);
}