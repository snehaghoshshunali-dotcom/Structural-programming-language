#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
struct student{
    char name[50];
    int roll;
    struct Date dob;
};
int main(){
    struct student s1;
    printf("enter name:");
    scanf("%s",s1.name);
    printf("enter roll:");
    scanf("%d",&s1.roll);
    printf("enter date of birth (dd mm yyyy):");
    scanf("%d%d%d",&s1.dob.day,&s1.dob.month,&s1.dob.year);
    printf("name is %s\n",s1.name);
    printf("roll is %d\n",s1.roll);
    printf("date of birth is %d/%d/%d\n",s1.dob.day,s1.dob.month,s1.dob.year);
    return 0;
}