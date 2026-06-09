#include <stdio.h>

int main()
{
    int n, temp, rem;
    int sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("Strong Number\n");
    else
        printf("Not Strong Number\n");

    return 0;
}
