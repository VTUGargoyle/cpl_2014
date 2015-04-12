#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10] = { 0 };
    int i, j, k, m, n, p, q;
    printf("Enter order of matrix A");
    scanf("%d%d", &m, &n);
    printf("enter the order of matrix B");
    scanf("%d%d", &p, &q);
    if (n != p) {
        printf("The matrices are not multiplicable\n");
        return -1;
    }
    printf("Enter matrix A in row major order\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter matrix B in column major order\n");
    for (j = 0; j < q; j++) {
        for (i = 0; i < p; i++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix A is\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B is\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; ++i) {
        for (j = 0; j < q; ++j) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The product of the matrices is\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
