#include <stdio.h>
#include <stdlib.h>

struct employee {
char name[30];
char date[15];
float salary;
};


int main()
{
    struct employee emp={"Adrian", "12/12/2020", 10000.00};
    printf("Name: %s\n", emp.name);
    printf("Date: %s\n", emp.date);
    printf("Salary: %.2f\n", emp.salary);

    printf("\nEnter employee information:\n");
    printf("Name: ");
    scanf("%s", emp.name);
    printf("Date: ");
    scanf("%s", emp.date);
    printf("\nSalary: ");
    scanf("%f", &emp.salary);

    printf("Name: %s\n", emp.name);
    printf("Date: %s\n", emp.date);
    printf("Salary: %.2f\n", emp.salary);


   return 0; 
}