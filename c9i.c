#include <stdio.h>

void strcopy(char str1[], char str2[])
{
    int i;
    for (i = 0; str2[i] = str1[i]; i++) ;
}

int main()
{
    char s1[40], s2[40];
    printf("enter the source string\n");
    gets(s1);
    strcopy(s1, s2);
    printf("destination string is \n");
    puts(s2);
    return 0;
}
