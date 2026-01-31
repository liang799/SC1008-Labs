#include <stdio.h>

int main() {
    /* Write your code here */
    char input;

    printf("Enter a character:\n");
    scanf("%c", &input);

    if (input >= 'a' && input <= 'z') {
        printf("Lower case letter");
    } else if (input >= 'A' && input <= 'Z') {
        printf("Upper case letter");
    } else {
        printf("Other character");
    }

    return 0;
}
