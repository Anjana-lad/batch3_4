//palindrome string:radar,wow,madam
#include<stdio.h>
int main(){
    char str[25];
    int i,len,temp=0;
    printf("Enter string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i] != str[len-i-1]){
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("%s is a palindrome",str);
    }
    else{
        printf("%s is not a palindrome",str);
    }
}