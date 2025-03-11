#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Size of table : ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Entrez %d element :\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }
    for(int i = 0; i < n; i++){
        sum += *(ptr + i);
    }
    printf("The sum of table's elements is : %d\n", sum);
    return 0;
}