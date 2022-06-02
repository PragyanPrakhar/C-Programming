// c program to find the area of the trapezium
#include <stdio.h>
int main(){
    int c,d ,e;
    printf("we have to print the area of the trapezium");
    printf("\nenter the first diameter c");
    scanf("%d",&c);    
    printf("/nenter the second diameter d");    
    scanf("%d",&d);
    e = 0.5 * c* d;
    printf("\nthe required area of the trapezium is %d" , e);


}