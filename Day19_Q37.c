#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Store originals
    tempA = a;
    tempB = b;

    // Find GCD using Euclidean algorithm
    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    gcd = tempA;  // GCD found
    lcm = (a * b) / gcd;

    printf("LCM = %d\n",
