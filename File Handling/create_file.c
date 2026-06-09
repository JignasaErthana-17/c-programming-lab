#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if(fp == NULL)
    {
        printf("File Creation Failed");
        return 1;
    }

    printf("File Created Successfully");

    fclose(fp);

    return 0;
}
