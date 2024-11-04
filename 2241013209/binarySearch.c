#include <stdio.h>
#include <stdbool.h>

int binarySearch(int arr[], int n,  int key);

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

    if(binarySearch(arr, n, key) != -1) {
        printf("Element %d found at index %d.", key, binarySearch(arr, n, key));
    }

    else {
        printf("Element %d is not found.", key, binarySearch(arr, n, key));
    }

    return 0;
}


int binarySearch(int arr[], int n,  int key) {
    int bottom = 0;
    int top = n - 1;
    bool found = false;

    while(bottom <= top) {
        int mid = (bottom + top) / 2;

        if(arr[mid] == key) {
            found = true;
            return mid;
        }

        else if(arr[mid] > key) {
             top = mid - 1;
        }

        else {
             bottom = mid + 1;
        }
    }

    return -1;
}