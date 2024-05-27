//bitwise operator: &,|,^,~,<<,>>
//a  b  ^
//0  0  0
//1  0  1
//0  1  1
//1  1  0
//negation ~ ie  ~num = -(num+1)  //~4=-5

#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    res=num1 &num2;
    printf("\n Bitwise And =%d",res);
    res=num1 | num2;
    printf("\n Bitwise OR =%d",res);
    res=num1 ^ num2;
    printf("\n Bitwise XOR =%d",res);
    res= ~num1;
    printf("\n Negation of num1 =%d",res);
}

// 3 == 0011
// 4 == 0100
// & == 0000 ==0
// | == 0111 == 7