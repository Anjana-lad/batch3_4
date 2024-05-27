//array with static values:
//array syntax: return type array_name[size]={value1,value2,...value n};
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};  //array initialization of static array. 
    printf("Array elements are:\n");
    for(int i=0;i<7;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n Square of each element in and array:\n ");
    for(int i=0;i<7;i++){
        printf(" %d \t",arr[i]*arr[i]);
    }
}