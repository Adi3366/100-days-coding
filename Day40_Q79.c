#include <stdio.h>

int main() {
    int rows, cols, i, j, start;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols];

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    for(start = 0; start < rows; start++) {
        i = start;
        j = 0;

        while(i >= 0 && j < cols) {
            printf("%d ", A[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    for(start = 1; start < cols; start++) {
        i = rows - 1;
        j = start;

        while(i >= 0 && j < cols) {
            printf("%d ", A[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    return 0;
}
