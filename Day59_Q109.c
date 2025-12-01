#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray (k): ");
    scanf("%d", &k);

    int maxSum = 0;

    if(k > n) {
        printf("Subarray size k cannot be greater than array size.\n");
        return 0;
    }

    for(int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int currentSum;
    for(int i = 1; i <= n - k; i++) {
        currentSum = 0;
        for(int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}
