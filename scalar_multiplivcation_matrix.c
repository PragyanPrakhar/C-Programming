//scalar multiplication of matrix
#include<stdio.h>
int main()
{
    int n,m,i,j;
    
    printf("enter the rows and columns of the matrix");
    scanf("%d %d" , &n,&m);
    int a[n][m];
    printf("enter the elements of the matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    
    int k;
    printf("enter the number to multipy : \n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            a[i][j] = k*a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d" , a[i][j]);
        }
        printf("\n");
    }
}