#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[500];
    int i = 0, wordStart = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    if(sentence[strlen(sentence) - 1] == '\n')
        sentence[strlen(sentence) - 1] = '\0';

    while(1) {
        if(sentence[i] == ' ' || sentence[i] == '\0') {
            reverseWord(sentence, wordStart, i - 1);
            wordStart = i + 1;
        }
        if(sentence[i] == '\0')
            break;
        i++;
    }

    printf("Sentence after reversing each word:\n%s\n", sentence);

    return 0;
}
