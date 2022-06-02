// c program to print the volume of the sphere
#include <stdio.h>
int main(){
    int r ,g;
    printf("we have to find the volume of the sphere");
    printf("\nenter the radius of the sphere");
    scanf("%d" , &r);
    g = 1.33 * 3.14 * r*r*r;
    printf("\nthe required volume is %d" , g);
    return 0;


}