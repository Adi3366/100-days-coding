#include <stdio.h>

int main() {
    int m, n, p, i, j, k;

    printf("Enter rows of Matrix A: ");
    scanf("%d", &m);

    printf("Enter columns of Matrix A (and rows of B): ");
    scanf("%d", &n);

    printf("Enter columns of Matrix B: ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];

    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A × B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
