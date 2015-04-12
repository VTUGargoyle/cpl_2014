#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[50];
    int marks;
    char grade;
} s[50];

int main()
{
    int i, n, flag = 0;
    char name[40];
    printf("Enter the no. of students\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter rollno, name, marks, and grade\n");
        scanf("%d", &s[i].rollno);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].marks);
        scanf(" %c", &s[i].grade);
    }
    printf("Enter the name to search\n");
    scanf("%s", name);
    for (i = 0; i < n; i++) {
        if (strcmp(name, s[i].name) == 0) {
            printf("Record found\n");
            flag = 1;
            printf("Marks is %d\n", s[i].marks);
        }
    }
    if (!flag)
        printf("Record not found\n");
    return 0;
}
