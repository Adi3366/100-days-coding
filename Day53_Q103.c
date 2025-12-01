#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int totalSum = 0;

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];  
    }

    int leftSum = 0;
    int pivot = -1;

    for(int i = 0; i < n; i++) {
        if(leftSum == totalSum - leftSum - arr[i]) {
            pivot = i;
            break;  
        }
        leftSum += arr[i];
    }

    printf("Pivot index: %d\n", pivot);

    return 0;
}
