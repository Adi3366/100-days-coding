#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    d = b*b - 4*a*c;

    if (d > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (d == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        // Imaginary roots
        float real = -b / (2*a);
        float imag = sqrt(-d) / (2*a);
        printf("Roots are imaginary (complex).\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}
