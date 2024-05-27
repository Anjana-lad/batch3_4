//array transpose
#include<stdio.h>
int main(){
    int row,col,arr[3][3];
    printf("Enter array elements:");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n before transpose Array\n ");
    for(row=0;row<3;row++){
     printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",arr[row][col]);
        }
    }
    printf("\n After transposing array:\n");
    for(col=0;col<3;col++){
    printf("\n");
        for(row=0;row<3;row++){
            printf("%d \t",arr[row][col]);
        }
    }
}