#include <stdio.h>

int input;

int main() {
    /* Write your code here */
    printf("Enter a number (between 1 and 9):\n");
    scanf("%d", &input);

    printf("Multiplication Table:\n");
    for (int k = 0; k < input + 1; k++) {
        if (k == 0) {
            printf("  ");
        } else {
            printf("%d ", k);
        }
    }

    printf("\n");

    for (int i = 1; i < input + 1; i++) {
        printf("%d ", i);
        for (int j = 1; j < i + 1; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}
