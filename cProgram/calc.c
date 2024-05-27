//calculator using function
#include<stdio.h>
int show(int a,char ch,int b,int res){
    printf("%d %c %d=%d",a,ch,b,res);
}
int add(int a,int b){
    int res=a+b;
    show(a,'+',b,res);
}
int sub(int a,int b){
    int res=a-b;
    show(a,'-',b,res);
}
int mul(int a,int b){
    int res=a*b;
    show(a,'*',b,res);
}
int div(int a,int b){
    int res=a/b;
    show(a,'/',b,res);
}
int main(){
    int choice,num1,num2;
    printf("\n Choice:");
    printf("\n 1.Addition.");
    printf("\n 2.Subtraction.");
    printf("\n 3.Multiplication.");
    printf("\n 4.Division.");
    do{
    printf("Enter your choice:");
    scanf("%d",&choice);
    
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    switch (choice){
    case 1:
        add(num1,num2); 
        break;
    case 2:
        sub(num1,num2);
        break;
    case 3:
        mul(num1,num2);
        break;
    case 4:
        div(num1,num2);
        break;
    default:
    printf("Invalid choice...");
    break;
    }
    
}while(choice<=4);
   }