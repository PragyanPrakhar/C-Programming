//to find the frequency of each element in an array
#include<stdio.h>
int main()
{
    int a[100],b[1000]={0},i,n,max;
    printf("enter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            max++;
        }
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(i=0;i<max;i++)
    {
        if(b[i]>0)
        printf("%d=%d",i,b[i]);
    }
return 0;
}