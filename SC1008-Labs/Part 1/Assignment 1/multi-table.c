#include <stdio.h>

int main() {
    /* Write your code here */
    int input, i, j, k;

    printf("Enter a number (between 1 and 9):\n");
    scanf("%d", &input);

    printf("Multiplication Table:\n");
    for (k = 0; k < input + 1; k++) {
        if (k == 0) {
            printf("  ");
        } else {
            printf("%d ", k);
        }
    }

    printf("\n");

    for (i = 1; i < input + 1; i++) {
        printf("%d ", i);
        for (j = 1; j < i + 1; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}
