#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if(strcmp(str1, str2) == 0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}
