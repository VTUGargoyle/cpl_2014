#include <stdio.h>
#include <string.h>

int main()
{
    char names[100][50], key[50];
    int i, n, first, last, mid, res;
    printf("enter the number of names");
    scanf("%d", &n);
    printf("enter the names in ascending order\n");
    for (i = 0; i < n; i++)
        scanf("%s", names[i]);
    printf("Enter the key\n");
    first = 0;
    last = n - 1;
    scanf("%s", key);
    while (first != last - 1) {
        mid = (first + last) / 2;
        res = strcmp(names[mid], key);
        if (res == 0) {
            printf("Key is found in position %d\n", mid + 1);
            break;
        } else if (res < 0) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    return 0;
}
