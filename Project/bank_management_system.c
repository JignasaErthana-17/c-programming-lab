#include <stdio.h>

int main() {
    float balance = 10000, amount;
    int choice;

    printf("1. Deposit\n2. Withdraw\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    printf("Enter Amount: ");
    scanf("%f", &amount);

    if(choice == 1)
        balance += amount;
    else if(choice == 2)
        balance -= amount;

    printf("Current Balance: %.2f\n", balance);

    return 0;
}
