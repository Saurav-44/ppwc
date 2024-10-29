#include <stdio.h>

void replace0And1(int arr[], int n);


int main() {

    int n;
    printf("Enter size of n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    replace0And1(arr, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");


    return 0;
}

void replace0And1(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
           arr[i] = 1;
        }

        else {
            arr[i] = 0;
        }
    }
}