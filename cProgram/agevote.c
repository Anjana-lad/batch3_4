//voting program
#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=18){
        printf("able to vote.");
    }
    else{
        printf("Not able to vote.");
    }
}