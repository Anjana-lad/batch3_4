//string reverse using string function
#include<stdio.h>
int main(){
    char str[25],temp;
    int i,len;
    printf("Enter string:");
    gets(str);
    printf("String=%s",str);
    len=strlen(str)-1;
    for(i=0; i< strlen(str)/2;i++){
        temp=str[i];
        str[i]=str[len];
        str[len--]=temp;
    }
    printf("\n Reverse string=%s",str);
}