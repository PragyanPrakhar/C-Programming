//a C program to count total number of negative elements in an array
#include<stdio.h>
int main(){
    int i,n,c;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=0;i<n;i++){
        if(a[i]<0){
            c=c+1;
        }
    }    
    printf("%d" , c);
    
}