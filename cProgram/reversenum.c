//reverse number: 2345=5432
#include<stdio.h>
int main(){
    int num,rem,rev=0;
    printf("Enter number:");
    scanf("%d",&num);
    printf("\n given number=%d",num);
    
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse num=%d",rev);
}