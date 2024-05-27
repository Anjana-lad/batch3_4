////with parameter no return
#include<stdio.h>
void sum(int,int); //function declaration


int main(){
    int a,b;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    sum(a,b);  //actual parameters a,b //function call
}


void sum(int num1,int num2){  //function definations num1,num2 formal parameters
  int res=num1+num2;
  printf("Result =%d",res);

}