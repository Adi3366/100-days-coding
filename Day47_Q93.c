#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if(str1[strlen(str1)-1] == '\n') str1[strlen(str1)-1] = '\0';
    if(str2[strlen(str2)-1] == '\n') str2[strlen(str2)-1] = '\0';

    if(strlen(str1) != strlen(str2)) {
        printf("Strings are NOT anagrams.\n");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        char ch1 = str1[i];
        char ch2 = str2[i];

        if(ch1 >= 'a' && ch1 <= 'z') freq1[ch1 - 'a']++;
        if(ch2 >= 'a' && ch2 <= 'z') freq2[ch2 - 'a']++;
    }

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}
