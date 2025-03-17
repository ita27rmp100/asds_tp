#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// exo 4 functions declarations :
int isPalindrome(char str[100]);

int main()
{
    char word[30] ;
    scanf("%s",&word);
    if(isPalindrome(word) == 1){
        printf("this word is palindrome");
    }else{
        printf("this word isn't palindrome");
    }
    return 0;
}

// exo 4 function definition :
int isPalindrome(char str[100]){
    int y = 0 ;
    char mirror[100]="";
    int x = strlen(str)-1;
    for(x;x>=0;x--){
        mirror[y] = str[x];
        y++;
    }
    mirror[y] = '\0';
    return (str==mirror) ;
}