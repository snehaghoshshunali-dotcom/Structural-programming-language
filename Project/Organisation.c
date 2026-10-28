#include <stdio.h>
#include <string.h>

struct organisation
{
    char name[50];
    char location[100];
    int totalEmployees;
};

struct employee
{
    int age;
    float salary;
    int id;
    char name[50];
    char post[50];
    char department[60];
};

int main()
{
    struct organisation org;
    struct employee e[5];
    int id, found = 0;
    int choice;

    printf("Enter Company Name: ");
    fgets(org.name, 50, stdin);
    org.name[strcspn(org.name, "\n")] = '\0';

    printf("Enter Company Location: ");
    fgets(org.location, 100, stdin);
    org.location[strcspn(org.location, "\n")] = '\0';

    org.totalEmployees = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter information for employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        getchar();

        printf("Name: ");
        fgets(e[i].name, 50, stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Post: ");
        fgets(e[i].post, 50, stdin);
        e[i].post[strcspn(e[i].post, "\n")] = '\0';

        printf("Department: ");
        fgets(e[i].department, 60, stdin);
        e[i].department[strcspn(e[i].department, "\n")] = '\0';
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Search Employee by ID\n");
        printf("2. Show Company Information\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for (int i = 0; i < 5; i++)
                {
                    if (id == e[i].id)
                    {
                        printf("\nEmployee information found!\n");
                        printf("ID: %d\n", e[i].id);
                        printf("Name: %s\n", e[i].name);
                        printf("Age: %d\n", e[i].age);
                        printf("Salary: %.2f\n", e[i].salary);
                        printf("Post: %s\n", e[i].post);
                        printf("Department: %s\n", e[i].department);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee not found.\n");
                }
                break;

            case 2:
                printf("\n===== Company Information =====\n");
                printf("Company Name: %s\n", org.name);
                printf("Location: %s\n", org.location);
                printf("Total Employees: %d\n", org.totalEmployees);
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}