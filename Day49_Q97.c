#include <stdio.h>
#include <string.h>

int main() {
    char name[200];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    if(name[strlen(name)-1] == '\n')
        name[strlen(name)-1] = '\0';

    printf("Initials: ");

    if(name[0] != ' ')
        printf("%c", name[0]);

    for(int i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ') {
            printf("%c", name[i+1]);
        }
    }

    printf("\n");
    return 0;
}
