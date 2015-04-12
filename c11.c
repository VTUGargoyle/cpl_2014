#include <stdio.h>

int isprime(int a)
{
    int i;
    if (a == 0 || a == 1)
        return 0;
    for (i = 2; i <= a / 2; i++)
        if (a % i == 0)
            return 0;
    return 1;
}

int main()
{
    int q = 0, x1, x2, flag = 1;
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
        printf("No prime numbers found in the given range found\n");
    return 0;
}
