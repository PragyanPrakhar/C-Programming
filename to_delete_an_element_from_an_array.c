#include<stdio.h>
int main()
{
    int arr[100],i,j,n,ele,pos,check=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elemnets of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element which you want to delete");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            pos=i+1;
            check=1;
        }
    }
    if(check==0)
    {
        printf("element not found");
        return 0;
    }
    
    for(i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("array after the deletion is");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",arr[i]);
    }
}