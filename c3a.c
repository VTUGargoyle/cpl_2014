#include <stdio.h>

int main()
{
    double num, x, x1;
    printf("Enter a number\n");
    scanf("%lf", &num);
    x = 0;
    x1 = num / 2;
    while (x != x1) {
        x = x1;
        x1 = (x + num / x) / 2.0;
    }
    printf("square root of %lf is %lf\n", num, x);
    return 0;
}
