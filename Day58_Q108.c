#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < n; i++) {
        int prod = 1;
        for(int j = 0; j < n; j++) {
            if(i != j) {
                prod *= nums[j];
            }
        }
        answer[i] = prod;
    }

    printf("Product array: ");
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
