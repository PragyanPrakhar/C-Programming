#include <stdio.h>
int main(){
    float x,y,z;
    printf("enter the first angle x");
    scanf("%f" , &x);
    printf("enter the second angle y");
    scanf("%f" , &y);
    z = 180 - (x+y);
    printf("the third angle is %.3f" , z);
    return 0;
    

}