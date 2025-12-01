#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while(str[j] != '\0') {
        j++;
    }

    if(str[j - 1] == '\n') {
        j--;
    }

    j--;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
