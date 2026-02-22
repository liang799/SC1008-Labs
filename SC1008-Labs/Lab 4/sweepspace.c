/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>

char *sweepSpace(char *str);

int main() {
    char str[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("sweepSpace(): %s\n", sweepSpace(str));
    return 0;
}

char *sweepSpace(char *str) {
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0'; // Null-terminate the new, shorter string

    return str;
}
