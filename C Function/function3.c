#include<stdio.h>
void calculatesum(int x, int y){
    int sum = x + y;
    printf("the sum of %d + %d is: %d", x,y, sum);

}
int main(){
    calculatesum(5, 3);
    calculatesum(8, 2);
    calculatesum(10, 15);
    return 0;


}