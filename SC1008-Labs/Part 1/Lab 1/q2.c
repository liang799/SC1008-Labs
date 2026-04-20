#include <stdio.h>

int main() {
    int numLines, value, count, i;
    double sum;

    printf("Enter number of lines: \n");
    scanf("%d", &numLines);

    for (i = 1; i <= numLines; i++) {
        sum = 0;
        count = 0;

        printf("Enter line %d (end with -1): \n", i);

        // scanf returns the number of variables successfully filled
        while (scanf("%d", &value) == 1 && value != -1) {
            sum += value;
            count++;
        }

        if (count > 0) {
            printf("Average = %.2f\n", sum / count);
        } else {
            printf("Average = 0.00\n"); // Handle empty lines
        }
    }

    return 0;
}
