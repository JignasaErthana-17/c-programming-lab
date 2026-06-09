#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "a");

    fprintf(fp, "\nThis Line Is Appended");

    fclose(fp);

    printf("Data Appended Successfully");

    return 0;
}
