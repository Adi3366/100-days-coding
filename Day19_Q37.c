#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    gcd = tempA;
    lcm = (a * b) / gcd;

    printf("LCM = %d\n",

