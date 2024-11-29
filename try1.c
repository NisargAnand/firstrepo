#include <stdio.h>


int main() {
    int arr1[5], arr2[5], result[5];
    int size = 5;


    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }


    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

 for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }

    printf("The multiplied array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

