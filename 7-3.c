#include <stdio.h>



void removeElement(int arr[], int *size, int element) {
    int newSize = 0;
    for (int i = 0; i < *size; i++) {
        if (arr[i] != element) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    *size = newSize;
}


int main() {
    int size, element;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the integer to remove: ");
    scanf("%d", &element);
    removeElement(arr, &size, element);
    printf("Array after removing %d:\n", element);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }


    return 0;

}
