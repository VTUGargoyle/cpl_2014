#include <stdio.h>

int main()
{
    char a[100], vlst[] = { 'a', 'e', 'i', 'o', 'u' }, c;
    int cons = 0, i = 0, spc = 0, v[5] = { 0 };
    printf("Enter a sentence\n");
    gets(a);
    for (i = 0; a[i]; i++) {
        c = a[i];
        if (c < 97)
            c = c + 32;
        switch (c) {
        case 'a':
            v[0]++;
            break;
        case 'e':
            v[1]++;
            break;
        case 'i':
            v[2]++;
            break;
        case 'o':
            v[3]++;
            break;
        case 'u':
            v[4]++;
            break;
        case ' ' + 32:
            spc++;
            break;
        default:
            if (c >= 'a' && c <= 'z')
                cons++;
        }
    }
    for (i = 0; i < 5; i++)
        printf("Frequency of %c: %d\n", vlst[i], v[i]);
    printf("No. of consonants: %d\n", cons);
    printf("No. of spaces: %d\n", spc);
    return 0;
}
