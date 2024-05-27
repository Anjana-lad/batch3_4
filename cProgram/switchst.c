//switch statements 
// switch (expression)
// {
// case number/character:
//       printf st;
//     break;

// default:
//     break;
// }

//week days name:
#include<stdio.h>
int main(){
    int days;
    printf("Enter day:");
    scanf("%d",&days);
    switch (days)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid choice.");
        break;
    }
}