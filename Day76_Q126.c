#include <stdio.h>

int main() {
    char filename[100];
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File %s does not exist or cannot be opened.\n", filename);
        return 1;
    }

    printf("Contents of %s:\n", filename);

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
