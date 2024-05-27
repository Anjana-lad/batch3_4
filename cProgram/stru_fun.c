//structure with function
#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks[4];
};
int details(struct student s){
    printf("\n Student details:\n");
    printf("\n Roll_no:%d",s.rollno);
    printf("\n Name:%s",s.name);
    for(int i=0;i<4;i++){
        printf("\n Marks=%f",s.marks[i]);
    }
}
int main(){
    struct student s1[2];
     // struct variable
     for(int i=0;i<2;i++){
    printf("Enter rollno:");
    scanf("%d",&s1[i].rollno);
    printf("Enter name:");
    scanf("%s",&s1[i].name);
    printf("Enter marks:");
    for(int j=0;j<4;j++){
        scanf("%f",&s1[i].marks[j]);
    }
    details(s1[i]); //function call
     }
}