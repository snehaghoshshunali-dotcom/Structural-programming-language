#include<stdio.h>
struct Organisation{
    char name[50];
    char location[50];
    int totalEmployees;
};
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct Organisation org;
    struct Employee emp[100];
    int choice,i,searchID;
    int count=0;
    int found;
    do{
        printf("\n==== ORGANISATION MANAGEMENT ====\n");
        printf("1.Enter Organisation Information\n");
        printf("2.Display Organisation Information\n");
        printf("3.Add Employee\n");
        printf("4.Display All Employees\n");
        printf("5.Search Employee by ID\n");
        printf("6. Display total employees\n");
        printf("0.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice){
            case 1:
            printf("Enter organisation Name:");
            scanf("%c", org.name);
            printf("Enter location:");
            scanf("%c",org.location);
            printf("Enter total employye:");
            scanf("%d",org.totalEmployees);
            printf("Organisation information saved!\n");
            case 2:
            printf("\nOrganisation Name:%c\n",org.name);
            printf("Location:%c\n",org.location);
            printf("Total Employees:%d\n",org.totalEmployees);
            break;
            case 3:
            if(count<100){
                printf("Enter employee ID:");
                scanf("%d",&emp[count].id);
                printf("Enter employee name:");
                scanf("%c",emp[count].name);
                printf("Enter employee salary:");
                scanf("%f",&emp[count].salary);
                count++;
                printf("Employee added successfully!\n");

            }
            else{
                printf("Employee limit reached!\n");
            }
            break;
            case 4:
            if(count==0){
                printf("No employee information available.\n");
            }
            else{
                for(i=0;i<count;i++){
                    printf("\n Employee%d\n",i+1);
                    printf("ID:%d\n",emp[i].id);
                    printf("Name:%c\n",emp[i].name);
                    printf("Salary:%2f\n",emp[i].salary);
                }
            }
            break;
            case 5:
            printf("Enter employee id to search:");
            scanf("%d",&searchID);
            found=0;
            for(i=0;i<count;i++){
                if(emp[i].id==searchID){
                    printf("Employee found!\n");
                    printf("Name:%c\n",emp[i].name);
                    printf("Salary:%2f\n",emp[i].salary);
                    found =1;
                    break;
                }
            }
            if(found==0){
                printf("Employee not found!\n");
            }
            break;
            case 6:
            printf("Total employees added:%d\n",count);
            break;
            case 0:
            printf("Program ended.\n");
            break;
            default:
            printf("Invalid choice!\n");
        }

    }
    while(choice!=0);
    return 0;
}
