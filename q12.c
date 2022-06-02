// Write a program to calculate salary of an employee, given his basic pay (entered by user), HRA=15% of the basic pay and TA=20% of the basic pay.
#include <stdio.h>
int main(){
    int a,b,k,m;
    printf("enter the salary of the employee");
    scanf("%d" , &a);
    printf("\nthe HRA is the 15 percent of the basic pay");
    b = a + (0.15*a);
    printf("\nthe salary after the HRA is %d" , b);
    printf("\nthe TA 20 percent of the basic pay" );
    k = (0.2*a);
    printf("\nthe increament due to TA is given ");
    m = b + k;
    printf("\n the final salary is given %d" , m);
    return 0;

} 