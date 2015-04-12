#include <stdio.h>

unsigned RotateRight(unsigned x, unsigned n)
{
    return (x >> n) | (x << (32 - n));
}

int main()
{
    unsigned x[10], n[10], res[10], i = 0, opt = 1, k;
    while (opt) {
        printf("Enter x and n\n");
        scanf("%u%u", &x[i], &n[i]);
        res[i] = RotateRight(x[i], n[i]);
        i++;
        printf("Continue? (enter 1 or 0)\n");
        scanf("%u", &opt);
    }
    k = i;
    printf("x\tn\tRotateRight(x,n)\n");
    for (i = 0; i < k; i++)
        printf("%u\t%u\t%u\n", x[i], n[i], res[i]);
    return 0;
}
