#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;   // store remainder (0 or 1)
        n = n / 2;           // reduce number
        i++;
    }

    printf("Binary = ");

    // print binary in reverse (most significant bit first)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}
