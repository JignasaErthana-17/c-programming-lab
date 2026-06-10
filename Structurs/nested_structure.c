#include <stdio.h>

struct Address {
    char city[50];
    char state[50];
};

struct Student {
    int roll;
    char name[50];
    struct Address addr;
};

int main() {
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter City: ");
    scanf("%s", s.addr.city);

    printf("Enter State: ");
    scanf("%s", s.addr.state);

    printf("\nStudent Details\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.addr.city);
    printf("State: %s\n", s.addr.state);

    return 0;
}
