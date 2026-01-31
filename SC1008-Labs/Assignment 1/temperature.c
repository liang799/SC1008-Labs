#include <stdio.h>

int main() {
    int fahrenheit = 0;
    double celsius = 0.0;

    while (1) {
        printf("Enter the temperature in degree F:\n");
        scanf("%d", &fahrenheit);

        if (fahrenheit == -1) {
            return 0;
        }

        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

        printf("Converted degree in C: %.2f\n", celsius);
    }
    return 0;
}
