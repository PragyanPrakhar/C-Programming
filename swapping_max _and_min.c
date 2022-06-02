// cprogram to swaap thre largest and the smallest number in an array
#include<stdio.h>
int main()
{
    int arr[100],i,max,min,n,temp=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    temp=max;
    max=min;
    min=temp;
    printf("swapped value for the maximum nunmber is %d",max);
    printf("swapped value for the minimum number is %d",min);
}