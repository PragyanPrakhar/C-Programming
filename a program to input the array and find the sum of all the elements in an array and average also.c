// a program to input the array and find the sum of all the elements in an array and average also
#include<stdio.h>
int main(){
    int A[100],n,i,s=0;
    float Avg;
    printf("enter the size of the array");
    scanf("%d" , &n);
    printf("enter the elements");
    for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
        s=s+A[i];
        Avg = (float)s/n ;
    }
    printf("sum=%d\nAverage = %f" , s , Avg);
    return 0;
}