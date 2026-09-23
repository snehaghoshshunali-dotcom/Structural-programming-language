#include<stdio.h>
void printstring(char arr[]);
int main(){
    char firstName[50];
    scanf("%s",firstName);
    printf("your name is %s",firstName);
    return 0;
}
void printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }


}