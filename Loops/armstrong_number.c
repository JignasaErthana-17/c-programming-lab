#include <stdio.h>

int main()
{
    int n, temp, rem;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}
