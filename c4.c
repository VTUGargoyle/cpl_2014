#include <stdio.h>

int main()
{
    int n, i;
    float a[20], x, res = 0;
    printf("Enter the degree of the polynomial\n");
    scanf("%d", &n);
    printf("Enter the coefficients of the polynomial\n");
    for (i = 0; i <= n; i++) {
        scanf("%f", &a[i]);
    }
    printf("Enter x\n");
    scanf("%f", &x);
    for (i = n; i > 0; i--) {
        res = (a[i] + res) * x;
    }
    res += a[0];
    printf("f(%f) = %f\n", x, res);
    return 0;
}
