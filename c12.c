#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int r[10], n[10], res[10], i = 0, opt = 1, k;
    while (opt) {
        printf("Enter n and r\n");
        scanf("%d%d", &n[i], &r[i]);
        res[i] = fact(n[i]) / (fact(r[i]) * fact(n[i] - r[i]));
        i++;
        printf("Continue? (enter 1 or 0)\n");
        scanf("%d", &opt);
    }
    k = i;
    printf("n\tr\tnCr\n");
    for (i = 0; i < k; i++)
        printf("%u\t%u\t%u\n", n[i], r[i], res[i]);
    return 0;
}
