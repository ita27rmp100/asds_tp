#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, *array;
    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    // Allocate memory for the array
    array = (int*) malloc(N * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    // Fill the array
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    // Display the array elements
    printf("Array elements are: ");
    for (int i = 0; i < N; i++) {
        printf("%d \n", array[i]);
    }
    // Free allocated memory
    free(array);
    return 0;
}