// c program to find the circumference and area
#include <stdio.h>
int main(){
    int r,c,a;
    printf("we have to print the area of the circle");
    printf("\nenter the radius");
    scanf("%d",&r);
    c = 2*3.14*r;
    a = 3.14*r*r;
    printf("\nthe required area is %d" , a);
    printf("\nthe required circumference is %d" , c);
    return 0;
}