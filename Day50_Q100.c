#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("All substrings of the string are:\n");

    for(int start = 0; start < len; start++) {
        for(int end = start; end < len; end++) {
            for(int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
