//multi-dimension array
//syntax: return-type array_name[table][row][col];
#include<stdio.h>
int main(){
    int arr[3][3][3]={ 
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {11,22,33},
            {44,55,66},
            {77,88,99}
        },
        {
            {21,22,23},
            {24,25,26},
            {27,28,29}
        }
    };
    int row,col,tab;
    for(tab=0;tab<3;tab++){
          for(row=0;row<3;row++){
            printf("\n");
            for(col=0;col<3;col++){
                printf("%d  ",arr[tab][row][col]);
            }
        }
        printf("\n");
    }
}