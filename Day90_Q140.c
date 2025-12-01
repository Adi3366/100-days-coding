#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf(" %[^\n]s", p.name);  

    printf("Enter age: ");
    scanf("%d", &p.age);

    int g;
    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &g);
    p.gender = g;

    printf("\nName: %s\n", p.name);
    printf("Age: %d\n", p.age);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Gender: Invalid\n");
    }

    return 0;
}
