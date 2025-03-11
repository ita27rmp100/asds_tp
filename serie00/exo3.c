#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 100
enum st{
    available,
    unavailable
};
enum ctgry{
    algo,
    archi,
    alg,
    se
};
typedef struct name
    {
        char firstName[30],lastName[30]
    };
typedef struct book
    {
        int isbn,pubYear,copies;
        enum ctgry category;
        char title[30];
        struct name author;
        enum st state;
    };
void fill(int *N,struct book Books[]);
void displayRecentBooks(struct book books[], int n, int year);
int countAvailableBooks(struct book books[], int n,enum ctgry category);

int main(){
    int n,year;
    struct book boooks[n];
    printf("***ENTER DATA***");
    fill(n,boooks);
    printf("***THE LIST OF BOOKS RECENT THAN :***");
    scanf('%i',&year);
    displayRecentBooks(boooks,n,year);
    return 0;
}

void fill(int *N,struct book Books[]){
    printf("Ho many Books you wanna add ?");
    scanf("%i",N);
    printf("Information you should enter for each book : isbn , category , authour name (first and last), pub year, state, numof copies");
    for (int i = 0; i < *N; i++) {
        printf("\nEnter respectively details for book %d:\n", i + 1);
        scanf("%d", &Books[i].isbn);
        int category;
        scanf("%d", &category);
        Books[i].category = (enum ctgry)category;
        scanf(" %[^\n]", Books[i].title);
        scanf("%s", Books[i].author.firstName);
        scanf("%s", Books[i].author.lastName);
        scanf("%d", &Books[i].pubYear);
        printf("State (0 for AVAILABLE, 1 for UNAVAILABLE): ");
        int state;
        scanf("%d", &state);
        Books[i].state = (enum st)state;
        printf("Number of Copies: ");
        scanf("%d", &Books[i].copies);
    }
}
void displayRecentBooks(struct book books[], int n, int year) {
    printf("\nBooks published after %d:\n", year);
    for (int i = 0; i < n; i++) {
        if (books[i].pubYear > year) {
            printf("ISBN: %d, Title: %s, Author: %s %s, Year: %d\n",
                   books[i].isbn, books[i].title, books[i].author.firstName,
                   books[i].author.lastName, books[i].pubYear);
        }
    }
}
int countAvailableBooks(struct book books[], int n,enum ctgry category){
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(books[i].state == available && books[i].category == category) {
            count++;
        }
    }
    return count;
}