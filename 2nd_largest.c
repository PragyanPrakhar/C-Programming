//a C program to find second largest element in an array
#include<stdio.h>
#include<limits.h>
int main(){
    int i,max,smax,n;
    printf("enter the size of the array");
    scanf("%d" , &n);
    int a[n];
    printf("enter the elements of the array");
    for(i=0;i<n;i++){
        scanf("%d" , &a[i]);
    }
    max = smax = INT_MIN;
    for (i=0;i<n;i++){
        if(max<a[i]){
            smax=max;
            max=a[i];
        }
        else if(a[i]<max && a[i]>smax){
            smax=a[i];
        }
    }
    printf("second largest=%d" , smax);
    return 0;
}