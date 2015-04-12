#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float x1, x2, real, imag;
    printf("Enter the coefficients\n");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (a == 0) {
        printf("Equation is not quadratic\n");
        return -1;
    }
    if (d < 0) {
        printf("Roots are complex and distinct\n");
        real = -b / (2.0 * a);
        imag = sqrt(-d) / (2.0 * a);
        printf("root1 = %f+i%f\n", real, imag);
        printf("root2 = %f-i%f\n", real, imag);
    } else if (d == 0) {
        x1 = -b / (2.0 * a);
        x2 = -b / (2.0 * a);
        printf("Roots are real and equal\n");
        printf("root1 = %f, root2 = %f\n", x1, x2);
    } else {
        x1 = (-b + sqrt(d)) / (2.0 * a);
        x2 = (-b - sqrt(d)) / (2.0 * a);
        printf("Roots are real and distinct\n");
        printf("root1 = %f, root2 = %f\n", x1, x2);
    }
    return 0;
}
