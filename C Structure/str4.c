#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s[3];
    int i;
    for(i=0;i<3;i++){
        printf("enter name,roll and cgpa of student %d:\n");
        scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].cgpa);

    }
    printf("\n Details of students:\n");
    for(i=0;i<3;i++){
        printf("%s %d %f\n",s[i].name,s[i].roll,s[i].cgpa);
        

    }
    return 0;
}