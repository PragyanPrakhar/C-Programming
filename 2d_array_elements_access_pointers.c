#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    int (*p)[3];
    p=a;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d" , &p[i][j]);
       }
   } 
for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
        printf("%d",*(*(a+i)+j));
       }
       printf("\n");
   }    
}