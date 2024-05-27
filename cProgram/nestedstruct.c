//nested structure
#include<stdio.h>
struct employee{
    int eid;
    char name[25];
    float salary;
    struct  department
    {
        int dep_id;
        char dep_nm[30];
    } dep;
};
int main(){
  struct employee e1;
  printf("Enter eid:");
  scanf("%d",&e1.eid);
  printf("Enter name:");
  scanf("%s",&e1.name);
  printf("Enter salary:");
  scanf("%f",&e1.salary);  
  printf("Enter department id:");
  scanf("%d",&e1.dep.dep_id);
  printf("Enter department name:");
  scanf("%s",&e1.dep.dep_nm);
  printf("\n Employee details:\n");
  printf("\nEid=%d",e1.eid);
  printf("\nName=%s",e1.name);
  printf("\nSalary=%f",e1.salary);
  printf("\nDep_id=%d",e1.dep.dep_id);
  printf("\nDepartment name=%s",e1.dep.dep_nm);
}