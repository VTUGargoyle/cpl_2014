#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

void printarrays(unsigned x[], unsigned n[], unsigned res[], unsigned i)
{
    if (i > 0) {
        printarrays(x, n, res, i - 1);
        printf("%u\t%u\t%u\n", x[i - 1], n[i - 1], res[i - 1]);
    }
}

int main()
{
    int r[10], n[10], res[10], i = 0, opt = 1;
    while (opt) {
        printf("Enter n and r\n");
        scanf("%d%d", &n[i], &r[i]);
        res[i] = fact(n[i]) / (fact(r[i]) * fact(n[i] - r[i]));
        i++;
        printf("Continue? (enter 1 or 0)\n");
        scanf("%d", &opt);
    }
    printf("n\tr\tnCr\n");
    printarrays(n, r, res, i);
    return 0;
}
