// maximum of two numbers
#include <stdio.h>
int main(){
    int a,b;
    printf("entere the value of a ");
    scanf("%d" , &a);
    printf("entere the value of b ");
    scanf("%d" , &b);
    if(a>b)
    printf("a is gratere than b");
    else{
        printf("%d is grater than %d",b,a);
        return 0;
    }
}
