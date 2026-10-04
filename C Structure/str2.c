#include<stdio.h>
struct student{
    int roll;
    float marks;
    char name[50];
};
int main(){
    struct student s1;
    printf("enter roll number:");
    scanf("%d",&s1.roll);
    printf("enter marks:");
    scanf("%f",&s1.marks);
    printf("enter name:");
    scanf("%s",s1.name);
    printf("roll number is %d\n",s1.roll);
    printf("marks is %f\n",s1.marks);
    printf("name is %s\n",s1.name);
    return 0;
}