#include <stdio.h>
#define M 10
int matTriSum(int x[M][M], int n);
int main() {
    int x[M][M];
    int n, i, j, s;
    printf("Enter array (nxn) size (n<=10): \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter row %d: \n", i);
        for (j = 0; j < n; j++)
            scanf("%d", &x[i][j]);
    }
    s = matTriSum(x, n);
    printf("The sum is: %d\n", s);
    return 0;
}
int matTriSum(int x[M][M], int n) {
    int i, j, sum = 0;

    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i - 1; j--) {
            /* printf("%d", x[i][j]); */
            sum += x[i][j];
        }
        /* printf("\n"); */
    }
    return sum;
}
