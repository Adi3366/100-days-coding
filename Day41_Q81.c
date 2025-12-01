#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while(str[i] != '\0') {
        count++;
        i++;
    }

    if(count > 0 && str[count - 1] == '\n')
        count--;

    printf("Number of characters = %d\n", count);

    return 0;
}
