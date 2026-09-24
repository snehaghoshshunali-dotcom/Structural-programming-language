#include<stdio.h>
void myfunction(char name[]){
    printf("Hello%s\n", name);

}
int main(){
    myfunction("Liam");
    myfunction("Jenny");
    myfunction("Anja");
    return 0;



}