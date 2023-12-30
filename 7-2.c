#include <stdio.h>


void swapFirstAndLastRow(int arr[][3], int columns) {
    int temp[columns];
    for (int i = 0; i < columns; i++) {
        temp[i] = arr[0][i];
        arr[0][i] = arr[2][i];
        arr[2][i] = temp[i];
    }
}



int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int columns = 3;
    printf("Original array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    swapFirstAndLastRow(arr, columns);
    printf("Array after swapping first and last row:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");

    }



    return 0;

}


