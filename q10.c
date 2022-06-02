//The population of a city is 30000. It increases by 20 % during first year and 30% during the second year. Write a program to find the population after two years? (Ans: 46800)
#include <stdio.h>
int main(){
    int a,b;
    printf("the population of the city is 30000");
    a = 30000 + (0.2*30000);
    printf("\nthe increased population during the first year is %d" , a);
    b = a + (0.3*a);
    printf("\nthe increased popuklation duri g the second year is %d ",b);
    return 0;
}