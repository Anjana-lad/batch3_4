//find vowel or not using switch statements
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);
    switch (ch){
    case 'A':
        printf("A is vowel");
        break;
    case 'E':
        printf("E is vowel");
        break;
    case 'I':
        printf("I is vowel");
        break;
    case 'O':
        printf("O is vowel");
        break;
    case 'U':
        printf("U is vowel");
        break;        
    default:
    printf("Invalid choice;");
        break;
    }
}