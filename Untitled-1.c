// c program to find the reverse of an array
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of an array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of an array");
    for(i=0;i<n;i++){
        scanf("%d" , &n);
    }
    for(i=n-1;i>=0;i--){
        printf("%d" , a[i]);
    }
    return 0;
}