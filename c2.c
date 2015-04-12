#include <stdio.h>

int main()
{
    int num, temp, rev, rem;
    printf("Enter a number\n");
    scanf("%d", &num);
    rev = 0;
    temp = num;
    while (num) {
        rem = num % 10;
        rev *= 10;
        rev += rem;
        num /= 10;
    }
    printf("The reversed number of %d is %d\n", temp, rev);
    if (temp == rev) {
        printf("The number is a palindrome\n");
    } else {
        printf("The number is not a palindrome\n");
    }
    return 0;
}
