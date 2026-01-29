#include <stdio.h>

int square1(int num);
void square2(int num, int *result);

int main() {
    int number, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("square1(): %d\n", square1(number));

    square2(number, &result);
    printf("square2(): %d\n", result);
    return 0;
}

int square1(int num) {
    int sum = 0;
    for (int i = 1; sum / num != num; i += 2) {
        sum += i;
    }
    return sum;
}

void square2(int num, int *result) {
    *result = 0;
    for (int i = 1; *result / num != num; i += 2) {
        *result += i;
    }
}
