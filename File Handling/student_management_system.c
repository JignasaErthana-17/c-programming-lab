#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;

    fp = fopen("students.dat", "ab");

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);

    printf("Student Record Saved");

    return 0;
}
