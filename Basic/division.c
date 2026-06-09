#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b != 0)
        printf("Division = %.2f\n", a / b);
    else
        printf("Division by zero is not allowed.\n");

    return 0;
}
