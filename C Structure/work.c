#include<stdio.h>
void dowork(int a,int b,int*sum,int *prod,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}
int main(){
    int a=3,b=4,sum,prod,avg;
    dowork(a,b,&sum,&prod,&avg);
    printf("sum=%d\n",sum);
    printf("prod=%d\n",prod);
    printf("avg=%d\n",avg);
    return 0;
}