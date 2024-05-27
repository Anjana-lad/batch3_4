//palindrome number: 11211=11211
#include<stdio.h>
int main(){
    int num,rem,rev=0,temp;
    printf("Enter number:");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reverse number=%d",rev);
    if(rev==temp){
        printf("\n It is Palindrome.");
    }
    else{
        printf("\n Not a palindrome number.");
    }
}