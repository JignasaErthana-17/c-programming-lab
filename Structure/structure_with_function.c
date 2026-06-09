#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
};

void display(struct Student s)
{
    printf("\nRoll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
}

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    display(s);

    return 0;
}
