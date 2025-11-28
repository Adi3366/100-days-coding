#include <stdio.h>

int main() {
    int n, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // store original number

    while (n != 0) {
        digit = n % 10;        // extract last digit
        rev = rev * 10 + digit; // build reversed number
        n = n / 10;             // remove last digit
    }

    if (original == rev)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is Not a Palindrome.\n", original);

    return 0;
}
