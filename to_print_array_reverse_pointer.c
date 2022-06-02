#include <stdio.h>
int main() {
    int n[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", n +i);
    }
    printf("You entered: \n");
    for (int i = 4; i>=0; i--)
    {
        printf("%d\n", *(n + i));
    }    
    return 0;
}