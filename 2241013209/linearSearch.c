#include <stdio.h>

int linearSearch(int arr[], int n, int key);
int main() {

     int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];


    for(int i = 0; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    if(linearSearch(arr, n, key) != -1) {
        printf("Element %d found at index %d.", key, linearSearch(arr, n, key));
    }

    else {
        printf("Element %d is not found.", key, linearSearch(arr, n, key));
    }


    return 0;
}

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }

    return -1;
}