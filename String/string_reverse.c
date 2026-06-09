#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    strrev(str);

    printf("Reversed String: %s", str);

    return 0;
}
