#include <stdio.h>
#include <string.h>

int search(char *term, char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: could not open file '%s'\n", filename);
        return 1;
    }
    else
    {
        char storeLines[1024]; // array to store the lines that the program reads
        int line_number = 0;
        while (fgets(storeLines, 1024, fp))
        {
            line_number++;
            if (strstr(storeLines, term) != NULL)
            {
                printf("%d: %s", line_number, storeLines);
            }
        }
        fclose(fp);

        return 0;
    }
}