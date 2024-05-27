//array operation like addition subtraction ,multiplication;
#include<stdio.h>
int main(){
    int row,col,r,c,arr1[20][20],arr2[20][20],sum[20][20],sub[20][20],mul[20][20];
    printf("Enter rows:");
    scanf("%d",&r);
    printf("Enter cols:");
    scanf("%d",&c);
    printf("Enter array 1 elements:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter array 2 elements:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("\n Printing array 1:");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",arr1[row][col]);
        }
    }
       printf("\n Printing array 2:");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",arr2[row][col]);
        }
    }
// // adding 2 matrix:
//         for(row=0;row<r;row++){
//         for(col=0;col<c;col++){
//             sum[row][col]=arr1[row][col]+arr2[row][col];
//         }
//     }
// //printing  sum array    ;
// printf("\n After addition:\n");
//     for(row=0;row<r;row++){
//         printf("\n");
//         for(col=0;col<c;col++){
//             printf("%d \t",sum[row][col]);
//         }
//     }
//     //for subtracting 2 array 
//      for(row=0;row<r;row++){
//         for(col=0;col<c;col++){
//             sub[row][col]=arr1[row][col]-arr2[row][col];
//         }
//     }
//   printf("\n After subtraction:\n");
//     for(row=0;row<r;row++){
//         printf("\n");
//         for(col=0;col<c;col++){
//             printf("%d \t",sub[row][col]);
//         }
//     }
   //multiplication of array:
   for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+=arr1[row][k]*arr2[k][col];
            }
        }
   }
    printf("\n Printing array multiplication:\n ");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",mul[row][col]);
        }
    }
}

// 2 3
// 4 5

// 7  9
// 8  2

// (2*7)+(3*8)  (2*9)+(3*2)
// (4*7)+(5*8)  (4*9)+(5*2)

// 38  24
// 68  46
