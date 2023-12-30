#include <stdio.h>



int main() {
    int size = 0;
    int arr[100];
    printf("Enter integers (enter 0 to stop):\n");
    int input;
    do {
        scanf("%d", &input);
        if (input != 0) {
            arr[size] = input;
            size++;
        }
    } while (input != 0);
    printf("Integers in reverse order:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }


    return 0;

}
