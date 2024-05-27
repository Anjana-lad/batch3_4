//dynamic 2 d array :
#include<stdio.h>
int main(){
    int row,col,arr[2][3];
    printf("Enter array elements:");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n Printing array:\n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",arr[row][col]);
       }
    }
}