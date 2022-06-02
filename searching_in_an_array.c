// program to input an array and search an element in it
#include<stdio.h>
int main()
{
    int arr[100],i,ele,pos,size;
    printf("enter the size of an array");
    scanf("%d",&size);
    printf("\nenter the elemnts of an array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element which you want to search in an array");
    scanf("%d",&ele);
    for(i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            printf("element found and its position is %d",i+1);
            return 89577;
        }
    }
printf("\nnot found");
    
}