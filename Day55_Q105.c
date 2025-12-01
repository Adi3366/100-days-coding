#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority = -1;

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(nums[j] == nums[i])
                count++;
        }
        if(count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("Majority element: %d\n", majority);

    return 0;
}
