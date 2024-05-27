//string compare without using string function;
#include<stdio.h>
int main(){
    char str1[20],str2[20];
    int i;
    printf("Enter string 1:");
    gets(str1);
    printf("String 2:");
    gets(str2);
    for(i=0;str1[i]==str2[i] && str1[i]!='\0';i++);
    
    if(str1[i]>str2[i]){
        printf("string 1 is greater");
    }
    else if(str1[i]<str2[i]){
        printf("str2 is greater.");
    }
    else{
        printf("Both are same..");
    }
}