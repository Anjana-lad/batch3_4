//string : group of character is called string. string always end with null character '\0'
//syntax: char string_name[size].
//string in-built function:- string.h header file should be included to used its function.
//1. strlen();
#include<stdio.h>
#include<string.h>
int main(){
  char str1[20],str2[20],str3[20]="I love programming";
  printf("Enter string1:-");
  //scanf("%[^\n]s",&str1);
  gets(str1);
  printf("Str1=%s\n",str1);
  printf("Enter str2:");
 // scanf("%s",&str2);
   gets(str2);
  printf("\n str2=%s",str2);  
  //string length:
  //int len=strlen(str1);
  //printf("\n Length of string 1= %d",len);
  //string copy: strcpy(destination ,string);
  //printf("\n String copy:=%s",strcpy(str3,str1));
   //printf("\n String 3=%s",str3);
   //string lower: strlwr(string);
   //printf("\n String to lower:=%s",strlwr(str1));
   //string upper: strupr(string);
  // printf("\n String to upper:=%s",strupr(str2));
   //string reverse : strrev(string);
  // printf("\n String reverse=%s",strrev(str3));
  // string concatenate: strcat(str1,str2);
  //printf("\n string concatenate=%s",strcat(str1,str2));
    // string compare : strcmp(str1,str2);
    // both string are same=0;
    // str1 > str2 =1;
    // str1< str2 =-1;
    printf("\n String compare=%d",strcmp(str1,str2));
    //string inside string : strstr(string,"inside string");
    printf("\n String inside string=%s",strstr(str3,"gram"));
    // string with character : strchr(string,'character');
    printf("\n String character:%s",strchr(str3,'l'));
    // string set:strset(string ,'character');
    printf("String set=%s",strset(str1,'x'));

}