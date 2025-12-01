#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    int len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    int newSentence = 1; 

    for(int i = 0; i < len; i++) {
        if(newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if(str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = 1;
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
