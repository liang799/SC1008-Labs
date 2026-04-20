#include <stdio.h>
int rSquare1(int num);
void rSquare2(int num, int *result);
int main() {
    int number, result = 0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rSquare1(): %d\n", rSquare1(number));
    rSquare2(number, &result);
    printf("rSquare2(): %d\n", result);
    return 0;
}
int rSquare1(int num) {
    if (num == 0) {
        return 0;
    }
    return (2 * (num - 1) + 1) + rSquare1(num - 1);
}
void rSquare2(int num, int *result) {
    int curr_num = num - 1;
    if (curr_num == -1) {
        return;
    }
    *result += 2 * curr_num + 1;
    rSquare2(curr_num, result);
}
