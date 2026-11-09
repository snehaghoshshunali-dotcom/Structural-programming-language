#include<stdio.h>
int main(){
    float a,b;
    int choice;
    char again;
    do{
        printf("\n---CALCULATOR---\n");
        printf("1.Addition\n");
        printf("2.Subtriction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");

        printf("Enter your choice");
        scanf("%d",&choice);
        printf("Enter two number");
        scanf("%f%f",&a,&b);

        switch(choice){
            case 1:
            printf("Result=%2f",a+b);
            break;
            case 2:
            printf("Result=%2f",a-b);
            break;
            case 3:
            printf("Result=%2f",a*b);
            break;
            case 4:
            if(b!=0){
                printf("Result=%2f",a/b);
            }
            else{
                printf("cannot divied by zero\n");
            }
            break;
            default:
            printf("invalid choice!\n");
        }
        printf("Do you want to calculate again?(y/n):");
        scanf(" %c",&again);
    }
    while(again=='y');
    printf("Thankyou for using the calculator!\n");
    return 0;
}