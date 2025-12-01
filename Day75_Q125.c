#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[200];

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    getchar();

    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}
