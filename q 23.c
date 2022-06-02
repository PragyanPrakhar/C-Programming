// a c program to enter days into years,weeks and months
# include <stdio.h>
int main(){
    float d,y,w,m;
    printf("enter the number of days");
    scanf("%f" , &d);
    y = d / 365 ;
    m = d /30;
    w = d/7;
    printf("\nnumber of years are %.3f" , y);
    printf("\nnumber of months are %.3f" , m);
    printf("\nnumber of weeks are %.3f" , w);
    return 0;

}  