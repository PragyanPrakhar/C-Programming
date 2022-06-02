// C program to copy all elements from an array to another array.
#include<stdio.h>
int main(){
    int i,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("enter the elements of the array");
    for (i=0;i<n;i++){
        scanf("%d" , &a[i]);
    }
    for (i=0;i<n;i++){
        b[i] = a[i];    
    }
    for (i=0;i<n;i++){
        printf("\n%d" , a[i]);
    }
    for(i=0;i<n;i++){
        printf("\n%d" , b[i]);
    }
    return 0;
    

}