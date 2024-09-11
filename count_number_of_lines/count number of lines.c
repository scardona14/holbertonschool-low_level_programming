#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "count number of lines.c"

int main ()
{
    FILE *fp = NULL;
    char ch;
    int linesCount = 0;

    fp = fopen(FILE_NAME, "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            linesCount++;
        }

        fclose(fp);
        fp = NULL;

        printf("Total number of lines in file %s is %d\n", FILE_NAME, ++linesCount);

        return 0;
    }
}