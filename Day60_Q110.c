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

    printf("Maximum elements in each subarray of size %d:\n", k);

    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = i + 1; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
