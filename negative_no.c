// //a C program to count total number of negative elements in an array
// #include<stdio.h>
// int main(){
//     int i,n,c;
//     printf("enter the size of the array");
//     scanf("%d",&n);
//     int a[n];
//     printf("enter the elements of the array");
//     for (i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     c=0;
//     for(i=0;i<n;i++){
//         if(a[i]<0){
//             c=c+1;
//         }
//     }    
//     printf("%d" , c);
    
// }            

#include <stdio.h>
int main()
{
    int i,n,c;
    c=0;
    printf("how many vlaues you want to enter : \n");
    scnaf("%d",&n);
    int arr[i];

    for(i=0;i<n;i++)
    {
    printf("enter the %d element : \n",i+1);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            c= c+1;
        }

    printf("Totalno. i=of elements that are negative is : %d\n",c);
    }


}