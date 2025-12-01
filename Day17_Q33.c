#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, count = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    int temp = n;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}

