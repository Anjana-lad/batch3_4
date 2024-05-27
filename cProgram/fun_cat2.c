//function with no parameter but with return statement.
#include<stdio.h>
int sum(){
    int a,b,res;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    res=a+b;
    return res;
}
int main(){
    printf("Sum of 2 numbers=%d",sum());  //function call
}