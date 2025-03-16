#include <stdio.h>

int main() {
    int a, b, sum;
    int *ptrA, *ptrB;
    printf("ENTER TWO INTEGERS : ");
    scanf("%d %d", &a, &b);
    ptrA = &a;
    ptrB = &b;
    sum = *ptrA + *ptrB;
    printf("The sum %d + %d is : %d\n", *ptrA, *ptrB, sum);
    return 0;
}