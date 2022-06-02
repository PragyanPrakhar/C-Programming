// to find the maximum and minimum ekements in an array
#include<stdio.h>
int main(){
    int a[100] , i , n,max,min;
    printf("enter the size of the array");
    scanf("%d" , &n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++){
        scanf("%d" , &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("maximum = %d \n minimum = %d" , max,min);
    return 0;
    
}