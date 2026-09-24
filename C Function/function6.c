#include<stdio.h>
void myfunction();
void myotherfunction();
int main(){
    myfunction();
    return 0;
}
void myfunction(){
    printf("Some text in myfunction\n");
    myotherfunction();
}
void myotherfunction(){
    printf("Hey!Some text in myotherfunction");

}
