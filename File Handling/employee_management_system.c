#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int empId;
    char name[50];
    float salary;
};

int main()
{
    FILE *fp;
    struct Employee e;

    fp = fopen("employee.dat", "ab");

    printf("Enter Employee ID: ");
    scanf("%d", &e.empId);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);

    fclose(fp);

    printf("Employee Record Saved");

    return 0;
}
