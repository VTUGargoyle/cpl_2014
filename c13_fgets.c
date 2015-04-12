#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char name[80], usn[20];
    fp1 = fopen("./student.txt", "r");
    if (fp1 == NULL) {
        printf("File student.txt not found\n");
        return -1;
    }
    fp2 = fopen("./usn.txt", "r");
    if (fp2 == NULL) {
        printf("File usn.txt not found\n");
        return -1;
    }
    fp3 = fopen("output.txt", "w");
    while (!feof(fp1) && !feof(fp2)) {
        fgets(name, 80, fp1);
        fgets(usn, 80, fp2);
        if (name[strlen(name) - 1] == '\n')
            name[strlen(name) - 1] = '\0';
        if (usn[strlen(usn) - 1] == '\n')
            usn[strlen(usn) - 1] = '\0';
        //~ printf("%d\n", strlen(usn));
        //~ fprintf(fp3, "%10s\t%10s\n", name, usn);

        fprintf(stdout, "%10s\t%10s\n", name, usn);
        name[0] = '\0';
        usn[0] = '\0';
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
