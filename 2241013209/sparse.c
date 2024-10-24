#include <stdio.h>



int main()
{
    
    int arr[3][3] = {
        {4, 0, 1},
        {3, 7, 0},
        {0, 4, 2}
    };

    int count = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == 0) {
                count++;
            }
        }
    }

    if(count >= (3 * 3) / 2) {
        printf("The matrix is sparse.");
    }

    else {
        printf("The matrix is not sparse.");
    }


    return 0;
}




