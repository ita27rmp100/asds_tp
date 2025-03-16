#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 100

typedef struct {
    char name[max];
    int population;
} City;

int compare(const void *a, const void *b) {
    return ((City *)a)->population - ((City *)b)->population;
}
int main() {
    int N;
    printf("Enter the number of cities: ");
    scanf("%d", &N);
    City cities[N];
    for (int i = 0; i < N; i++) {
        printf("Enter city name and population: ");
        scanf("%s %d", cities[i].name, &cities[i].population);
    }
    qsort(cities, N, sizeof(City), compare);
    printf("\nCities sorted by population:\n");
    for (int i = 0; i < N; i++) {
        printf("%s %d\n", cities[i].name, cities[i].population);
    }
    return 0;
}