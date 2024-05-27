//armstrong number:153=1*1*1=1
//  5*5*5=125,3*3*3=27 
//  sum 1+27+125=153
#include<stdio.h>
int main(){
    int num,rem,sum=0,tempnum;
    printf("Enter number:");
    scanf("%d",&num);
    tempnum=num;
    while(num>0){
        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;
    }
    printf("Sum of given number:%d",sum);
    if(sum==tempnum){
        printf("\n This is an armstrong number.");
    }
    else{
        printf("\n This is not and armstrong number.");
    }
}