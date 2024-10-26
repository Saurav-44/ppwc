#include <stdio.h>
#include <stdbool.h>


bool checkPrime(int n);

int main() {
    
    int n;
   printf("Enter number: ");
   scanf("%d", &n);

   checkPrime(n);

    return 0;
}

bool checkPrime(int n) {

    // printf("Enter number: ");
    // scanf("%d", &num);

    bool isPrime = true;

    if (n == 0 || n == 1) {

        isPrime = false;
    }

    else {

        for (int i = 2; i < n; i++) {

            if (n % i == 0) {

                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {

        printf("%d is prime\n", n);
    }

    else {

        printf("%d is not prime\n", n);
    }

    return isPrime;
}