#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
    char word[100], longest[100];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    if(sentence[strlen(sentence) - 1] == '\n')
        sentence[strlen(sentence) - 1] = '\0';

    longest[0] = '\0';  

    while(1) {
        if(sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];  
        } else {
            word[j] = '\0'; 

            if(j > maxLen) {
                maxLen = j;
                strcpy(longest, word);  
            }

            j = 0;
        }

        if(sentence[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
