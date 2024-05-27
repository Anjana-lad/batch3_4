//goto statement: works like jump statement;
// syntac:
//goto label_name;
// label_name:{
//     statemnet;
//  };
#include<stdio.h>
int main(){
    int i,num;
      for(i=1;i<5;i++){
     printf("\n Enter number");
     scanf("%d",&num);
    if(num%2==0){
        goto even;
    }
    else{
      break;
    }
    even:{
      printf("\n Number is even");
    }    
      }
}