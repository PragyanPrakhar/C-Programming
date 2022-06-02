// sorting of an array in desscending order
#include<stdio.h>
int main()
{
    int arr[100],i,b,l,j,n,temp;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(b=0;b<n;b++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    for(l=0;l<n;l++)
    {
        printf("%d\t",arr[l]);
    }
}