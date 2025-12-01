#include <stdio.h>
#include <string.h>

int main() {
    char name[200];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if(name[strlen(name)-1] == '\n')
        name[strlen(name)-1] = '\0';

    int len = strlen(name);
    int lastSpace = -1;

    for(int i = 0; i < len; i++) {
        if(name[i] == ' ')
            lastSpace = i;
    }

    printf("Formatted name: ");

    for(int i = 0; i <= lastSpace; i++) {
        if(i == 0 && name[i] != ' ')
            printf("%c", name[i]);
        else if(name[i] == ' ' && name[i+1] != '\0' && i+1 < lastSpace)
            printf("%c", name[i+1]);
    }

    if(lastSpace != -1)
        printf(" ");

    if(lastSpace != -1) {
        for(int i = lastSpace + 1; i < len; i++)
            printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}
