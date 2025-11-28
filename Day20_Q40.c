#include <stdio.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);   // read binary as a string

    printf("1's Complement = ");

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid binary digit detected.\n");
            return 0;
        }
    }

    printf("\n");
    return 0;
}
