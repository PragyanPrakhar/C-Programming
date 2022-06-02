//WAP to input an array of N number of elements and find the frequency of an inputted element 
//in that array.

#include<stdio.h>
int main()
{
    int arr[100],i,j,n,ele,c=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter the element of which youj want to find the frequency");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            c=c+1;
        }
    }
    printf("the frequency of %d is %d" , ele,c);
    return 0;

}