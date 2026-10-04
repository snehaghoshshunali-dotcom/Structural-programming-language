#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s[3];
    int i, max=0;
    for(i=0;i<3;i++){
        printf("enter name,roll and cgpa of student %d:\n");
        scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].cgpa);

    }
    for(i=1;i<3;i++){
        if(s[i].cgpa>s[max].cgpa){
            max=i;
        }
    }
    printf("topper:%s\n",s[max].name);
    printf("roll number:%d\n",s[max].roll);
    printf("cgpa:%f\n",s[max].cgpa);
    return 0;
}