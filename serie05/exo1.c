#include <stdio.h>
#include <stdbool.h>

#define Size 12
// declaration of function
void fillAndDisplayVector(int v[], int size);
void calculateSumAndAverage(int v[], int size);
void findMaxAndMin(int v[], int size);
bool checkValueExists(int v[], int size, int n);
void countOccurrences(int v[], int size);
void sortVector(int v[], int size, int sorted[]);
void reverseVector(int v[], int size, int reversed[]);
int countOccurrences1(int v[],int size);

int main() {
    int v[Size] = {4,1,6,3,8,1,6,2,8,1,5,7};
    int v1[12], v2[12];
    int n;
    // Fill and display vector
    fillAndDisplayVector(v,12);
    // Calculate and display sum and average
    calculateSumAndAverage(v,12);
    // Find and display max and min elements
    findMaxAndMin(v,12);
    // Check if a value exists in the vector
    printf("Enter a value to check: ");
    scanf("%d", &n);
    checkValueExists(v, 12, n) ? printf("Value %d exists in the vector.\n", n) : printf("Value %d doesn't exist in the vector.\n", n);
    // Calculate and display the occurrences of each element
    countOccurrences1(v, 12);
    // Sort and display vector
    sortVector(v, 12, v1);
    // Reverse and display vector
    reverseVector(v, 12, v2);

    return 0;
}
// Function to display vector
void fillAndDisplayVector(int v[], int size) {
    printf("Vector elements");
    for (int i = 0; i < size; i++){
        printf("%i ",v[i]);
    }
    printf("\n");
}
// Function to calculate sum and average
void calculateSumAndAverage(int v[], int size) {
    int sum = 0 ;
    float avg = 0;
    for (int i = 0 ; i < size ; i++)
    {
        sum += v[i];
    }
    avg = (float)sum/size;
    printf("The sum of elements is %i . \nThe average : %.2f",sum,avg);
}
// Function to find max and min
void findMaxAndMin(int v[], int size) {
    int max = v[0], min = v[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < size; i++){
        if (v[i]>max){
            max = v[i];
            maxIndex = i;
        }
        if (v[i]<min){
            min = v[i];
            minIndex = i;
        }
    }
    printf("Max: %d at position %d\n", max, maxIndex);
    printf("Min: %d at position %d\n", min, minIndex);
}
// Function to check if a value exists
bool checkValueExists(int v[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (v[i] == n) {
            return true;
            break;
        }
    }
}
// Function to count occurrences of each element
void countOccurrences(int v[], int size) {
    int counts[Size] = {0};
    for (int i = 0; i < size; i++) {
        counts[v[i]]++;
    }
    printf("The numberccurrences of each element:\n");
    for (int i = 0; i < 10; i++) {
        if (counts[i] > 0) {
            printf("%d: %d times\n", i, counts[i]);
        }
    }
}
    // other try :
int countOccurrences1(int vec[],int size){
    int counts[Size] = {1};
    for(int i=0;i<size;i++){
        if (vec[i]>=0){
            for(int j=i+1;j<size;j++){
                if (vec[j]==vec[i] && vec[i] > 0)
                {
                    counts[i] +=1;
                    vec[j] = -1;
                }
            }
        }
    }
    printf("The numberccurrences of each element:\n");
    for (int i = 0; i < 10; i++) {
        if (counts[i] > 0) {
            printf("%d: %d times\n",vec[i], counts[i]);
        }
    }

    return 0;
}

// Function to sort the vector
void sortVector(int v[], int size, int sorted[]) {
    for (int i = 0; i < size; i++) {
        sorted[i] = v[i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (sorted[j] > sorted[j + 1]) {
                sorted[j] += sorted[j+1];
                sorted[j+1] =  sorted[j] - sorted[j+1];
                sorted[j] -= sorted[j+1];
            }
        }
    }

    printf("Sorted vector: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sorted[i]);
    }
    printf("\n");
}

// Function to reverse the vector
void reverseVector(int v[], int size, int reversed[]) {
    for (int i = 0; i < size; i++) {
        reversed[i] = v[size - i - 1];
    }

    printf("Reversed vector: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");
}