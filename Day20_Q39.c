#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;
    int foundOdd = 0;  // to check if any odd digit exists

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;   // extract last digit

        if (digit % 2 != 0) {   // check if odd
            product *= digit;
            foundOdd = 1;
        }

        n = n / 10;   // remove last digit
    }

    if (foundOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
