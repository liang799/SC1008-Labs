#include <stdio.h>

int main() {
    int num, digit, firstDigit = 0;

    printf("Enter the number:\n");
    scanf("%d", &num);

    printf("wordEquivalent(): ");

    // Guard clause specifically required by the question
    if (num > 99) {
        printf("Input exceeds 99\n");
    } else if (num == 0) {
        printf("zero\n");
    } else {
        firstDigit = 1;

        while (num > 0) {
            // Logic for spacing between words
            if (firstDigit == 0) {
                printf(" ");
            }

            digit = num % 10;

            switch (digit) {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
            }

            num = num / 10;
            firstDigit = 0;
        }
        printf("\n");
    }

    return 0;
}
