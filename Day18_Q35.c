#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {   // if remainder is 0 → i is a factor
            printf("%d ", i);
        }
    }

    printf("\n");
