#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[count] != '\0')
    {
        count++;
    }

    printf("Total Characters = %d", count - 1);

    return 0;
}
