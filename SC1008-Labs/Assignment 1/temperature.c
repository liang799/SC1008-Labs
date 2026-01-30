#include <stdio.h>

int fahrenheit;
double celcius;

int main() {
    while (1) {

        printf("Enter the temperature in degree F:\n");
        scanf("%d", &fahrenheit);

        if (fahrenheit == -1) {
            return 0;
        }

        celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("Converted degree in C: %.2f\n", celcius);
    }
    return 0;
}
