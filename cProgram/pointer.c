//pointer declaration: in this we will use 2 symbol: 1.* (asterisk sign) to define a pointer variable.2.& (ampersand) to assign a value to the pointer variable.
#include<stdio.h>
int main(){
    int num;
    int *ptr;
    printf("Enter number:");
    scanf("%d",&num);
    ptr=&num;
    printf(" address of  %d = %d",num,ptr);
}