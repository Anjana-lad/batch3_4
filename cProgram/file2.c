// to read the data from file:
#include<stdio.h>
int main(){
    char str[50];
    FILE *fp;
    fp=fopen("G:\\batch3_4\\cProgram\\new_file.txt","r+");
    if(fp==NULL){
        printf("file not found..");
    }
    else{
        printf("File found..\n ");
        while(fgets(str,50,fp)!=NULL){
            printf("\n string=%s",str);
        }
    }
    fseek(fp,0,SEEK_END);
    printf("\n cursor position:= %d",ftell(fp));
    fclose(fp);
}