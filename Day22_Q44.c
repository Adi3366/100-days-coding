#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 1, denominator = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n >= 1) {
        sum += 1;
    }

    for (int i = 2; i <= n; i++) {
        numerator = 2 * i - 1;
        denominator = 2 * i;
        sum += (float)numerator / denominator;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
