#include <stdio.h>

int main() {
    int days, fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine.\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%d\n", fine);
    }
    else if (days <= 10)
