//nested if 
// syntax: if(condition){
//         if(condition){
//             true part 
//         }
//         else{
//             false part
//         }
//      }
// else{
//     if(condition){
//         true part
//     }
//     else{
//         false part
//     }
// }
#include<stdio.h>
int main(){
    int age;
    char choice;
    printf("Enter choice Male M and Female F:");
    scanf("%c",&choice);
    if(choice=='M' || choice =='m'){
       
        if(age>=25){
            printf("Eligible for marriage.");
        }
        else{
            printf("\n Not eligible for marriage");
        }
    }
    else if(choice =='f' || choice=='F'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=21){
            printf("Eligible for marriage");
        }
        else{
            printf("Not eligible for marriage");
        }
    }
    else{
        printf("choice is invalid..");
    }
}