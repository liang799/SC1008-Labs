#include <stdio.h>
#include <string.h>
void rStrReverse1(char *s);
int main() {
    char str[40], *p;
    printf("Enter a string: \n");
    fgets(str, 40, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    rStrReverse1(str);
    printf("rStrReverse1(): %s", str);
    return 0;
}

void rStrReverse1(char *s) {
    int len = strlen(s);
    char temp;

    if (len <= 1)
        return;

    // abc
    temp = s[0];       // a
    s[0] = s[len - 1]; // cbc

    s[len - 1] = '\0'; // cb\0

    rStrReverse1(s + 1);

    s[len - 1] = temp;
}
