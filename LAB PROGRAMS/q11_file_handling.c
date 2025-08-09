//Write a C program to count no of lines, blank lines and comments in a given program using files.

#include <stdio.h>

int main() {
    int lines = 0, bl_lines = 0, comments = 0;
    char line[1000];

    FILE *records = fopen("records.txt", "r");
    if (records == NULL) {
        printf("Error in opening file\n");
        return 1;
    }

    while ((fgets(line, sizeof(line), records))!=NULL) {
        lines++;

        int i = 0;
        while (line[i] == ' ' || line[i] == '\t') i++;
        if (line[i] == '\n' || line[i] == '\0')
            bl_lines++;

        if (line[0] == '/' && line[1] == '/')
            comments++;
    }

    fclose(records);
    printf("Lines: %d\nBlank lines: %d\nComment lines: %d\n", lines, bl_lines, comments);

    return 0;
}
