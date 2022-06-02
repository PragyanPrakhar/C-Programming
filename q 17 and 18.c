// c program to find the perimeter and the area of the rectangle
#include <stdio.h>
int main(){
    int l,b,m,n;
    printf("we have to find the perimeter and the area of the rectangle");
    printf("\nenter the length l");
    scanf("%d" , &l);
    printf("\nenter the breadth b");
    scanf("%d" , &b);
    m = 2*(l+b);
    n=l*b;
    printf("\nthe required area of the rectangle is %d" , n);
    printf("\nthe required perimeter of the rectangle is %d" , m);
    return 0;
}