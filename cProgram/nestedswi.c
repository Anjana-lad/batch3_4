//switch inside switch is called nested switch:
#include<stdio.h>
int main(){
    int choice,ch;
    printf("\n Select your choice:\n");
    printf("\n 1. Pizza");
    printf("\n 2. cold-drink");
     printf("\n Enter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\n You have selected pizza:");
        printf("\n Enter choice for pizza:");
         printf("\n1. veg Pizza");
          printf("\n 2. cheese Pizza");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nYou selected veg pizza");
            break;
         case 2:
                printf("\nYou have selected  cheese pizza");
                break;
        default:
            printf("\nInvalid choice of pizza");
            break;
        }
        break;
    case 2:
    printf("\n You have selected cold - drink:");
        printf("\n Enter choice for CD:");
         printf("\n 1. fresh juice");
          printf("\n2. cold-coco");
        scanf("%d",&ch);
    switch (ch){
           case 1:
            printf("You selected fresh juice");
            break;
            case 2:
                printf("You have selected cold-coco");
                break;
        default:
            printf("Invalid choice.");
            break;
        }
        break;
    
    default:
    printf("Invalid choice choice it again..");
    break;
    } 
}