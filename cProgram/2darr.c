//2d array : in the form of matrix rows and columns.
//syntax: return-type arrayname [row][col]
#include<stdio.h>
int main(){
    int row,col,arr[2][3]={{12,3,45},{4,5,8}}; 
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",arr[row][col]);
        }
    }
}