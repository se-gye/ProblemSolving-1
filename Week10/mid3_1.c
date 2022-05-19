#include <stdio.h>
#include <stdlib.h>

void testPirint(int *a, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void selectionSortNew(int A[], int n, int start) {
    int i, j, k, max, max_idx, temp;
    for (i = start, k = 0; i < n - 1; i++, k++) {
        max = A[start]; max_idx = start;
        for (j = start; j < n - k; j++) {
            if (A[j] > max) {
                max = A[j];
                max_idx = j;
            }
        }
        temp = A[n - k - 1];
        A[n - k - 1] = A[max_idx];
        A[max_idx] = temp;
    }

    return;
}

int main() {
    int n, start;
    int* a;

    scanf("%d", &n);
    a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &start);

    selectionSortNew(a, n, start);
    testPirint(a, n);

    free(a);
    return 0;
}