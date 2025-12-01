#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long sum = 0;
    double average;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        average = (double)sum / count;
        printf("Sum: %ld\n", sum);
        printf("Average: %.2lf\n", average);
    }

    return 0;
}
