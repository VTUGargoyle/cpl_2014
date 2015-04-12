#include <stdio.h>
#include <math.h>

int main()
{
    float x, sum, term, d;
    int i;
    printf("Enter value in degrees\n");
    scanf("%f", &d);
    x = d * M_PI / 180;
    term = x;
    sum = x;
    for (i = 3; i <= 19; i += 2) {
        term = -term * x * x / (i * (i - 1));
        sum += term;
    }
    printf("sin(%f) = %f\n", d, sum);
    printf("Using library function: sin(%f) = %f\n", d, sin(x));
    return 0;
}
