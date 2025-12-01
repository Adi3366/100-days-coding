#include <stdio.h>

int main() {
    long long num;
    int digit, freq[10] = {0}, maxFreq = 0, maxDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if(num < 0)
        num = -num;

    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for(int i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most times = %d\n", maxDigit);
    printf("It occurs %d times.\n", maxFreq);

    return 0;
}
