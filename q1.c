//Q1. Write a C program for calculating the price of a product after adding the sales tax to its original price. Where rate of tax and price is inputted by user
#include <stdio.h>
int main(){
    float a,b,k,l;
    printf("enter the price of the goods");
    scanf("%f" , &a);
    printf("enter the tax rate");
    scanf("%f",&b);
    k = a*b;
    l = k+a;
    printf("the total amount is %.2f" , l);
    return 0;
    
}