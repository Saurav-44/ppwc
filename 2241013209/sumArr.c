#include <stdio.h>

void sumArr(int a[], int b[], int r[], int size);

int main() {

    int a[] = {5, 7, -3};
    int b[] = {4, 2, 3};

    int n = sizeof(a) / sizeof(a[0]);
    int r[n];

    sumArr(a, b, r, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", r[i]);
    }

    printf("\n");


    return 0;
}

void sumArr(int a[], int b[], int r[], int size) {
    

    for(int i = 0; i < size; i++) {
       r[i] = a[i] + b[i];
    }
}