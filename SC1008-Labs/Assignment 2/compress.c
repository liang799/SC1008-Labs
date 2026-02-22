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
    char *original = str;
    char result[40] = "";
    char current = *str;
    int count = 0;
    int resIdx = 0;
    int i;

    while (1) {
        if (*str == current && *str != '\0') {
            count++;
        } else {
            // Write the compressed segment: [countChar]
            if (count > 1) {
                resIdx += sprintf(&result[resIdx], "[%d%c]", count, current);
            } else {
                resIdx += sprintf(&result[resIdx], "%c", current);
            }

            if (*str == '\0')
                break; // Exit after processing final group

            current = *str;
            count = 1;
        }
        str++;
    }
    for (i = 0; i < 40; i++) {
        if (result[i] == '\0') {
            *(original + i) = '\0';
            break;
        }
        printf("%c", result[i]);
        *(original + i) = result[i];
    }
}
