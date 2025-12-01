#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if(s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    int maxLen = 0;

    for(int i = 0; i < len; i++) {
        int visited[256] = {0}; 
        int currentLen = 0;

        for(int j = i; j < len; j++) {
            if(visited[(unsigned char)s[j]]) {
                break; 
            }
            visited[(unsigned char)s[j]] = 1;
            currentLen++;
        }

        if(currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
