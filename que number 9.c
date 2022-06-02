// c pprogram to swap two numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf("we have to swap the value of the two numbers");
    printf("\nenter the value of a");
    scanf("%d" , &a);
    printf("\nenter the value of b");
    scanf("%d" , &b);
    c = a;
    a = b;
    b = c;
    printf("here is the swapped value");
    printf(" the swapped value is a=%d b=%d" , a , b);
    return 0;
}