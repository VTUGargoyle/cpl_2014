#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char name[80], usn[20];
    fp1 = fopen("./studentname.txt", "r");
    if (fp1 == NULL) {
        printf("File studentname.txt not found\n");
        return -1;
    }
    fp2 = fopen("./usn.txt", "r");
    if (fp2 == NULL) {
        printf("File usn.txt not found\n");
        return -1;
    }
    fp3 = fopen("output.txt", "w");
    while (!feof(fp1) && !feof(fp2)) {
        fscanf(fp1, "%s", name);
        fscanf(fp2, "%s", usn);
        fprintf(fp3, "%10s\t%10s\n", name, usn);
        name[0] = usn[0] = '\0';
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("%10s\t%10s\n", "Name", "USN");
    printf("%10s\t%10s\n", "----", "---");
    fp3 = fopen("output.txt", "r");
    while (!feof(fp3)) {
        fscanf(fp3, "%s", name);
        fscanf(fp3, "%s", usn);
        printf("%10s\t%10s\n", name, usn);
        name[0] = usn[0] = '\0';
    }
    fclose(fp3);
    return 0;
}
