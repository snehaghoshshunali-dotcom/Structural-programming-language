#include<stdio.h>
int main(){
    int ages[] = {20,22,18,35,48,26,87,70};
    float avg, sum=0;
    int i;
    for(i=0;i<8;i++){
        sum += ages[i];
    }
    avg = sum/8;
    printf("Average age is: %2f", avg);
    return 0;





}