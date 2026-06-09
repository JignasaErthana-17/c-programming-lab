#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
};

int main()
{
    struct Student s = {101, "Jignasa"};
    struct Student *ptr = &s;

    printf("Roll Number : %d\n", ptr->rollNo);
    printf("Name        : %s\n", ptr->name);

    return 0;
}
