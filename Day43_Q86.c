#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while(str[j] != '\0') {
        j++;
    }

    if(str[j - 1] == '\n') {
        j--;
    }

    j--; 

    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0;
