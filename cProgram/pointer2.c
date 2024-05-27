//pointer with arithmetic operation
#include<stdio.h>
int main(){
    int arr[5]={78,96,8,58,26};
    int *ptr1,*ptr2;
    ptr1=&arr[0];
    ptr2=&arr[4];
    printf("address of 0 index=%d",ptr1);
    printf("\n address of last element=%d",ptr2);
    //ptr1++;
  //  ptr2--;
    // printf("\n address of ptr++ =%d",ptr1);
    // printf("\n address of element ptr2--=%d",ptr2);
    // ptr1- ptr2;
    // printf("\n address of ptr++ =%d",ptr2);

    for(int i=0;i<=4;i++){
        printf("\n address of array %d=%d",ptr1[i],&ptr1[i]);
    }
}