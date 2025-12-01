#include <stdio.h>

int main() {
    int n, x;
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("Index of ceil of %d: %d\n", x, index);

    return 0;
}
