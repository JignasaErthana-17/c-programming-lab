#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "w");

    fprintf(fp, "Welcome To C Programming");

    fclose(fp);

    printf("Data Written Successfully");

    return 0;
}
