#include <stdio.h>

unsigned RotateRight(unsigned x, unsigned n)
{
    return (x >> n) | (x << (32 - n));
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
    unsigned x[10], n[10], res[10], i = 0, opt = 1;
    while (opt) {
        printf("Enter x and n\n");
        scanf("%u%u", &x[i], &n[i]);
        res[i] = RotateRight(x[i], n[i]);
        i++;
        printf("Continue? (enter 1 or 0)\n");
        scanf("%u", &opt);
    }
    printf("x\tn\tRotateRight(x,n)\n");
    printarrays(x, n, res, i);
    return 0;
}
