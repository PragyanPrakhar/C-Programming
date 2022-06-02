// addition and subtraction of two matrix
#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int sum[i][j];
    int  a[n][n],b[n][n] ;
    printf("enter the elements of the matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    printf("enter the elemnts of the second matrix");  
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }
    printf("now adding two matrices");
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum of two matrix is\n");
    
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d",sum[i][j]);
            }
            printf("\n");
        }
}