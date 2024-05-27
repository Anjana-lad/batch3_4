//file handling:to create and external text file.
#include<stdio.h>
int main(){
    char str[50];
    printf("Enter string:");
    gets(str);
    FILE *fp;
    fp=fopen("G:\\batch3_4\\cProgram\\new_file.txt","w+");
    if(fp==NULL){
        printf("File  not created");
    }
    else{
        printf("File created..");
        if(strlen(str)>0){
            fputs(str,fp);
        }
    }
    fclose(fp);
}