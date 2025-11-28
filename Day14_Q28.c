#include <stdio.h>

int main() {
    int n;
    long long product = 1;   // Use long long for large results

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;   // multiply even numbers only
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
