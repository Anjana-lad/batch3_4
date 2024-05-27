// if(condition){
//     //body of if statements
// }
// else{
//     //execute statements;
// }

//even and odd number
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num%2!=0){
        printf("number is odd.");
    }
    else{
        printf("number is even");
    }
}
