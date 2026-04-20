/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#define N 20
int main() {
    int a[N], i, j, k, m;
    int size;
    /*edit*/
    /* Write your code here – for additional local variables */

    /*end_edit*/

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    printf("Result: \n");

    /*edit*/
    /* Write your code here */
    for (i = 0; i < size; i++) {
        m = size - i - 1;
        for (k = m; k < size; k++) {
            printf("%d", a[k]);
        }
        for (j = 0; j < m; j++) {
            printf("%d", a[j]);
        }
        printf("\n");
    }

    /*end_edit*/
    return 0;
}
