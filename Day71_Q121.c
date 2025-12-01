#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); 

    int i = 0;
    while(name[i] != '\0') {
        if(name[i] == '\n') {
            name[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
