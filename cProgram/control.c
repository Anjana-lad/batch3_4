//control statements:
// 1. break;
// 2. continue;
// 3. goto statement;
 #include<stdio.h>
 int main(){
    int i=1,num;
    printf("Enter number where to stop:");
    scanf("%d",&num);
    while(i<=100){
        i++;
        if(i==num){
      continue;
    }
    else{
    printf("%d \t",i); 
    }
  }
} 