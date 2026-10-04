#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll=1667;
    s1.cgpa=9.5;
    strcpy(s1.name,"Sneha Ghosh");
    printf("roll number is %d\n",s1.roll);
    printf("cgpa is %f\n",s1.cgpa);
    printf("name is %s",s1.name);
    return 0;
}