#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    int freqS[26] = {0};
    int freqT[26] = {0};

    int lenS = strlen(s);
    int lenT = strlen(t);

    if(lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    for(int i = 0; i < lenS; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    int isAnagram = 1;
    for(int i = 0; i < 26; i++) {
        if(freqS[i] != freqT[i]) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
