#include <stdio.h>
#define N 10000

char primes[N];

int isprime(int a)
{
    if (primes[a])
        return 1;
    return 0;
}

int main()
{
    int q = 0, k, y, x1, x2, flag = 1;
    for (q = 0; q < N; q += 1) {
        primes[q] = 1;
    }
    for (q = 2; q < N; q += 1) {
        k = q;
        for (y = 2 * k; y < N; y += k) {
            primes[y] = 0;
        }
    }
    printf("Enter the range\n");
    scanf("%d%d", &x1, &x2);
    for (q = x1; q < x2; q++) {
        if (isprime(q)) {
            flag = 0;
            printf("%d ", q);
        }
    }
    printf("\n");
    if (flag)
        printf("No prime number in the given range found\n");
    return 0;
}
