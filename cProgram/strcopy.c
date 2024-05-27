//string copy without using string function.
#include<stdio.h>
int main(){
    char str[25],str2[25];
    int i;
    printf("Enter string:");
    gets(str);
    printf("Str1=%s",str);
    for(i=0; str[i]!='\0';i++){
        str2[i]=str[i];
    }
    str2[i]='\0';
    printf("\n String str2=%s",str2);
}