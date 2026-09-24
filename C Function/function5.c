#include<stdio.h>
int myfunction(int x, int y){
    return x + y;

}
int main(){
    int result = myfunction(5, 10);
    printf("the sum is: %d", result);
    return 0;


}