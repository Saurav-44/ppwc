#include <stdio.h> 

void swap(int *x, int *y);

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {

    int a = 6;
    int b = 9;

    swap(&a, &b);
    printf("Swapped numbers: %d %d", a, b);


    return 0;
}

