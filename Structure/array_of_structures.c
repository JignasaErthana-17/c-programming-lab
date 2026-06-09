#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
};

int main()
{
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Student %d Details\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d %s\n", s[i].rollNo, s[i].name);
    }

    return 0;
}
