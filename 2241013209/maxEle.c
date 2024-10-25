#include <stdio.h>

int findMax(int arr[], int n);

int main() {

    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];


    for(int i = 0; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Maximum element: %d", findMax(arr, n));

    return 0;
}

int findMax(int arr[], int n) {
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}


// Using Pointers

// #include <stdio.h>

// int findMax(int *arr, int n);

// int main() {

//     int n;
//     printf("Enter size: ");
//     scanf("%d", &n);

//     int arr[n];


//     for(int i = 0; i < n; i++) {
//         printf("Enter arr[%d]: ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("Maximum element: %d", findMax(arr, n));

//     return 0;
// }

// int findMax(int *arr, int n) {
//     int *max = arr;

//     for(int *ptr = arr + 1; ptr < arr + n; ptr++) {
//         if(*ptr > *max)  {
//             max = ptr;
//         }
//     }

//     return *max;
// }