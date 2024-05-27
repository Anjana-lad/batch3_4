//dynamic array 
#include<stdio.h>
int main(){
    int i,arr[5];
    printf ("Enter array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Printing array elemments:\n");
    for(i=0;i<5;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    //accessing array element:
    printf("Accessing array element at position 2=%d",arr[3]);
}