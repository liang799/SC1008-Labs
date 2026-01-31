#include <stdio.h>

int input;
int stars;

int main() {
    /* Write your code here */
    printf("Enter the height:\n");
    scanf("%d", &input);
    printf("The pattern is:\n");

    for (int i = 0; i < input; i++) {
        for (int j = 0; j < input - i; j++) {
            printf(" ");
        }
        stars = 2 * i + 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        // 1, 3, 5, 7
        printf("\n");
    }
    return 0;
}
