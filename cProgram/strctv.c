//structure example:
#include<stdio.h>
struct student{
    int roll_no; // structure data member;
    char name[25]; 
} s1,s2;  //s1,s2 struct variable ;
int main(){
    //structure variable declare:struct student s1,s2;
    printf("Enter rollno:");
    scanf("%d %d",&s1.roll_no,&s2.roll_no);
    printf("Enter name:");
    scanf("%s",s1.name);
    printf("Enter name of s2:");
    scanf("%s",s2.name);
    printf("\n Details of student 1:\n");
    printf("\n Rollno=%d \n name=%s",s1.roll_no,s1.name);
    printf("\n details of student 2");
    printf("\n Rollno = %d", s2.roll_no); 
    printf("\n Name s1 = %s",s2.name);
}
