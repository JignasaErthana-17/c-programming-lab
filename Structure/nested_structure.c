#include <stdio.h>

struct Address
{
    char city[30];
    char state[30];
};

struct Student
{
    int rollNo;
    char name[50];
    struct Address addr;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter City: ");
    scanf("%s", s.addr.city);

    printf("Enter State: ");
    scanf("%s", s.addr.state);

    printf("\nStudent Details\n");
    printf("Roll No : %d\n", s.rollNo);
    printf("Name    : %s\n", s.name);
    printf("City    : %s\n", s.addr.city);
    printf("State   : %s\n", s.addr.state);

    return 0;
}
