// c program to find the power of any number
int main(){
    int x , y, z;
    printf("we have to find the power of any number");
    printf("\nenter the number x");
    scanf("%d" , &x);
    printf("\nenter the number y");
    scanf("%d" , &y);
    z=1;
    while (y !=0){
        z*=x;
        --y;
    }
    printf("result = %d" , z);
    return 0;

}