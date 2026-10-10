#include<stdio.h>
int check(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 0;
    }
    return check(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    if(check(n)){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}