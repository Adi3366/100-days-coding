#include <stdio.h>

int main() {
    int n, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;          // extract last digit
        rev = rev * 10 + digit;  // build*
