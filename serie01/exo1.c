#include <stdio.h>

int main(){
    int num;
    int *ptr;
    printf("Entrez un entier : ");
    scanf("%d", &num);
    ptr = &num; 
    printf("value (directly) : %d\n", num);
    printf("address (directly) : %p\n",&num);
    printf("value (via pointeur) : %d\n", *ptr);
    printf("Adresse (via pointeur) : %p\n", (void*)ptr);
    return 0;
}