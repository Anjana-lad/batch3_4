//recursion means function calling itself
#include<stdio.h>
int sum(int num){
    if(num!=0){
   return num+sum(num-1);
    }
    else{
       return 0;
    }
}
int main(){
    int n,res;
    printf("Enter number:");
    scanf("%d",&n);
    res=sum(n);  // function call
    printf("Result=%d",res);
}