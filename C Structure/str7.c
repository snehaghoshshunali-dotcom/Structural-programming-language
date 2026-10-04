#include<stdio.h>
struct student{
    int roll;
    float marks;
};
int main(){
    struct student s1;
    struct student*ptr;
    ptr=&s1;
    ptr->roll=369;
    ptr->marks=96.5;
    printf("roll=%d\n",ptr->roll);
    printf("marks=%f\n",ptr->marks);
    return 0;
}