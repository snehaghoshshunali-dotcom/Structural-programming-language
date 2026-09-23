#include<stdio.h>
int main(){
    float price = 100.00;
    float*ptr = &price;
    float **pptr = &ptr;
    printf("%f", **pptr);
    return 0;





}