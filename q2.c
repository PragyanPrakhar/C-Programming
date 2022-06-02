//. Write a C program to calculate the weekly wages of an employee. The pay depends on wages per hour and number of hours worked. Moreover, if the employee has worked for more than 30 hours, then he or she gets twice the wages per hour, for every extra hour that he or she has worked.
#include <stdio.h>
int main(){
    float a,b,k,l,m;
    char name[30];
    printf("the amount to be paid to the workers with the the cost of rs 200 per hour");
    printf("\nenter the name of the worker");
    scanf("%s",name);
    printf("\nenter the working hours of the worker");
    scanf("%f",&a);
    b = a * 200;
    if(a>30){
    k = a-30;
    l = k*400;
    m = l+b;
    printf("the total amount is %.2f" , m);
    }
    else{
    printf("the total amount is %.2f",b);
    }
    return 0;
}