#include <stdio.h>

int main()
{
    int a[50], i, j, tmp, n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    printf("In sorted order, the numbers are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
