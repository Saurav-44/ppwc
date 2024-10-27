
// call by reference


#include <stdio.h>

int findGcd(int *x, int *y);

int main() {

    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    int y;
    printf("Enter y: ");
    scanf("%d", &y);

    int a = x;
    int b = y;

    
    printf("The GCD of %d and %d: %d", a, b, findGcd(&x, &y));


    return 0;
}

int findGcd(int *x, int *y) {
    if(*y == 0) {
        return *x;
    }

    int t = *x % *y;
    *x = *y;
    *y = t;

    return findGcd(x, y);
    
}



// #include <stdio.h>

// int findGcd(int x, int y);

// int main() {

//     int x;
//     printf("Enter x: ");
//     scanf("%d", &x);

//     int y;
//     printf("Enter y: ");
//     scanf("%d", &y);

    
//     printf("The GCD of %d and %d: %d", x, y, findGcd(x, y));


//     return 0;
// }

// int findGcd(int x, int y) {
//     if(y == 0) {
//         return x;
//     }

//     return findGcd(y, x % y);
    
// }