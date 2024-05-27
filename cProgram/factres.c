//factorial using recursion.
#include<stdio.h>
int fact(int);
int main(){
    int num,fact1;
    printf("Enter number:");
    scanf("%d",&num);
    fact1=fact(num);
    printf("Factorial is=%d",fact1);
}
int fact(int n){
    if(n!=0)
        return n*fact(n-1);
    
    else
        return 1;
    
}