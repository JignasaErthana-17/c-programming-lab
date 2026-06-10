#include <stdio.h>

int main() {
    int age = 25;
    int salary = 30000;

    if (age >= 18) {
        if (salary >= 25000) {
            printf("Eligible for loan.\n");
        } else {
            printf("Salary criteria not met.\n");
        }
    } else {
        printf("Age criteria not met.\n");
    }

    return 0;
}
