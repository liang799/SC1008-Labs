#include <math.h>
#include <stdio.h>

int main() {
    /* Write your code here */
    int input, tmp, curr;
    int exponent = 0;
    int acc = 0;

    printf("Enter a binary number:\n");
    scanf("%d", &input);

    tmp = input;

    while (tmp != 0) {
        curr = tmp % 10;
        acc += curr * pow(2, exponent);
        tmp = tmp / 10;
        ++exponent;
    }

    printf("The equivalent decimal number: %d", acc);
    return 0;
}
