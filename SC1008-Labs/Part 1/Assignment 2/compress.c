#include <ctype.h>
#include <stdio.h>
#include <string.h>

void compressStr(char *str);

int main() {
    char str[40];
    printf("Enter a sequence of characters: \n");
    scanf("%s", str);
    printf("compressStr(): ");
    compressStr(str);
    return 0;
}

void compressStr(char *str) {
    char result[40];
    int resIdx = 0, i = 0;
    int len = strlen(str);
    int count;

    while (i < len) {
        count = 1;
        while (i + count < len && str[i + count] == str[i])
            count++;
        if (count > 1)
            resIdx += sprintf(&result[resIdx], "[%d%c]", count, str[i]);
        else
            result[resIdx++] = str[i];
        i += count;
    }
    result[resIdx] = '\0';
    printf("%s\n", result); // Add this
}
