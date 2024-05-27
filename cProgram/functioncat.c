//function categories:-
//1. no parameter no return.
//2. no parameter with return.
//3. with parameter no return.
//4. with parameter with return.

//no parameter no return
#include<stdio.h>
void sum(){
    int a,b,res;
    printf("Enter values:");
    scanf("%d %d",&a,&b);
    res=a+b;
    printf("Result =%d",res);
}
int main(){
   sum();  //function call
}