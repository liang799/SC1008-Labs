#include <stdio.h>
#include <string.h>

void extractLastChar(char *str1, char *str2);

int main() {
    char str1[80], str2[80], *p;
    printf("Enter a string: \n");
    fgets(str1, 80, stdin);
    if (p = strchr(str1, '\n'))
        *p = '\0';
    extractLastChar(str1, str2);
    printf("extractLastChar(): %s\n", str2);
    return 0;
}

void extractLastChar(char *str1, char *str2) {
    char result[80] = "";
    int index = 0;
    int i = 0;
    while (*str1 != '\0') {
        if (*(str1 + 1) == ' ') {
            result[i] = *str1;
            i++;
        }
        if (*(str1 + 1) == '\0') {
            result[i] = *str1;
            i++;
        }
        str1++;
    }
    strcpy(str2, result);
}
