#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File Not Found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
