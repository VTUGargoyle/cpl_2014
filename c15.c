#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float sum = 0, sumsq = 0, mean, sd, x[20], num;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }
    for (i = 0; i < n; i++) {
        num = *(x + i);
        sum += num;
        sumsq += num * num;
    }
    mean = sum / n;
    sd = sqrt(sumsq / n - mean * mean);
    printf("sum = %f, mean = %f, s.d = %f\n", sum, mean, sd);
    return 0;
}
