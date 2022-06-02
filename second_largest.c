// to find the second largest element in an array
#include<stdio.h>
int main()
{
    int arr[100],max=0,smax=0,i,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=smax=0;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>smax)
        {
            smax=arr[i];
        }
    }    
    printf("%d",smax);
    return 0;
}