#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("\nCharacters in the string:\n");

    while(str[i] != '\0') {
        if(str[i] != '\n')
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
