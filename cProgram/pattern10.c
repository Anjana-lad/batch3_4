// * * * * *
//   * * * *
//     * * *
//       * *
//         *
#include<stdio.h>
int main(){
    int row,col,space;
    int num=1;
    for(row=0;row<5;row++){
        for(space=0;space<row;space++){
            printf(" ");
        }
        for(col=0;col<5-row;col++){
            printf("%d",num);
        
        }
            num++;
        printf("\n");
    }
}