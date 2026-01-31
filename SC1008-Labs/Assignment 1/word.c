
#include <stdio.h>

// Function prototype
void wordEquivalent(int num);
int input;

int main() {
    printf("Enter the number:\n");
    scanf("%d", &input);

    printf("wordEquivalent(): ");
    wordEquivalent(input);
    printf("\n");
    return 0;
}

void wordEquivalent(int num) {

    if (num > 99) {
        printf("Input exceeds 99");
        return;
    }

    // 2. Iterative Loop for Reverse Order
    int firstDigit = 1; // Flag to handle spacing
    while (num > 0) {
        if (!firstDigit) {
            printf(" ");
        }

        int digit = num % 10;

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

        num = num / 10; // Move to the next digit
        firstDigit = 0; // After the first word, we need spaces
    }
}
