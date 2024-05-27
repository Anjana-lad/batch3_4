//array sorting in ascending or in descending order on 1D array.
#include<stdio.h>
int main(){
    int i,arr[7]={74,52,86,35,12,45,69};
    int j, temp;
     printf("Array elements are:\n");
     for(int i=0;i<7;i++){
        printf("%d \t",arr[i]);
     }
//applying logic of sorting..
     for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(arr[i] < arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
     }    
//printing array element
        printf("\n After sorting:\n");
        for(i=0;i<7;i++){
           printf("%d \t",arr[i]);
        }
}