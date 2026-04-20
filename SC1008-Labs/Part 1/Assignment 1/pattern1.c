#include <stdio.h>

int main() {
    /* Write your code here */
    int input;
    int stars;
    int i, j, k;

    printf("Enter the height:\n");
    scanf("%d", &input);
    printf("The pattern is:\n");

    for (i = 0; i < input; i++) {
        for (j = 0; j < input - i; j++) {
            printf(" ");
        }
        stars = 2 * i + 1;
        for (k = 0; k < stars; k++) {
            printf("*");
        }
        // 1, 3, 5, 7
        printf("\n");
    }
    return 0;
}
