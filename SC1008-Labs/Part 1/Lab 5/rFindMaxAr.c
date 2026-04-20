#include <stdio.h>

void rFindMaxAr(int *a, int size, int *max);

int main() {
    int ar[50], i, max, size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    max = ar[0];
    rFindMaxAr(ar, size, &max);
    printf("rFindMaxAr(): %d\n", max);
    return 0;
}

// finds the maximum number in an array of integer numbers
void rFindMaxAr(int *ar, int size, int *max) {
    if (size == 0) {
        return;
    }
    if (*ar > *max) {
        *max = *ar;
    }
    ar += 1;
    return rFindMaxAr(ar, size - 1, max);
}
