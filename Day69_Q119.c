#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (exactly one repeated element):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = 0;

    for(int i = 0; i < n; i++) {
        repeated ^= arr[i];
    }
    for(int i = 1; i <= n-1; i++) {
        repeated ^= i;
    }

    printf("The repeated element is: %d\n", repeated);

    return 0;
}
