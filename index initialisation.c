#include <stdio.h>
int main(){
    int arr[5] = {[2]=7 , [4] = 9};
    int i;
    for(i=1;i<=5;i++){
        printf("%d" , arr[i]);
    }
    return 0;
}