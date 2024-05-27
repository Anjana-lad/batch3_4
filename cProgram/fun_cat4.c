//with parameter with return
#include<stdio.h>
int a=10;
int b=20;
double add(double,double); 

int main(){
    double a,b;
    printf("Enter a and b:");
    scanf("%lf %lf",&a,&b);
    printf("Addition=%lf",add(a,b));

}
double add(double a,double b){
    return a+b;
}