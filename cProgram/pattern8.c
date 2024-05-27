//    *
//   ***
//  *****
// *******
//*********
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=5;space>=row;space--){
//             printf(" ");
//         }
//         for(col=1;col<=2*row-1;col++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// *********
//  *******
//   *****
//    ***
//     *
#include<stdio.h>
int main(){
    int row,col,space;
    int n;
    printf("Enter rows:");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(space=0;space<=row;space++){
            printf(" ");
        }
        for(col=1;col<=2*(n-row)-1;col++){
            printf("*");
        } 
        printf("\n");
    }
}
