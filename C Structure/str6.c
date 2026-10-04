#include<stdio.h>
struct student{
    int roll;
    float marks;
};
void display(struct student s){
    printf("Roll=%d\n",s.roll);
    printf("marks=%f\n",s.marks);
}
int main(){
    struct student s1;
    s1.roll=100;
    s1.marks=85.5;
    display(s1);
    return 0;
}