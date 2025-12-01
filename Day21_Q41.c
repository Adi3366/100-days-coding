#include <stdio.h>
#include <math.h>

int main() {
    int n, original, first, last, digits, power, middle;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    last = n % 10;

    digits = (int)log10(n);

    first = n / pow(10, digits);

    power = pow(10, digits);
    middle = (n % power) / 10;

    int swapped = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
