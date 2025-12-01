#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d elements (0 to %d, missing one number):\n", n-1, n);

    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2;

    int arrSum = 0;
    for(int i = 0; i < n-1; i++) {
        arrSum += arr[i];
    }

    int missing = totalSum - arrSum;
    printf("The missing number is: %d\n", missing);

    return 0;
}
