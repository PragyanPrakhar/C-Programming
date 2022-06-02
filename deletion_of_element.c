#include<stdio.h>
int main(){
    int i,size,pos,n;
    printf("enter the size of the array");
    scanf("%d" , &n);
    int a[n];
    printf("enter the elements of an array");
    for (i=0;i<n;i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the  position of the required element to be deleted");
    scanf("%d",&pos);
    if(pos>n || pos<0){
        printf("invalid position");
    }
    else
    {
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    } 
    }
    return 0;
}