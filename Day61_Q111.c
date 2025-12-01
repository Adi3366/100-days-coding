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

    printf("Enter the window size k: ");
    scanf("%d", &k);

    if(k > n) {
        printf("Window size k cannot be greater than array size.\n");
        return 0;
    }

    printf("First negative integers in each subarray of size %d:\n", k);

    for(int i = 0; i <= n - k; i++) {
        int firstNegative = 0;
        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                firstNegative = arr[j];
                break;
            }
        }
        printf("%d ", firstNegative);
    }

    printf("\n");
    return 0;
}
