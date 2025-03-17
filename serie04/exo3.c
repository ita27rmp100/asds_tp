#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


// function's declaration :
void mirrorWord(char str[100]);

int main()
{
    //Execution part :
    char word[30] ;
    scanf("%s",&word);
    mirrorWord(word);
}
// def of function
void mirrorWord(char str[100]){
    int y = 0 ;
    char mirror[100]="";
    int x = strlen(str)-1;
    for(x;x>=0;x--){
        mirror[y] = str[x];
        y++;
    }
    mirror[y] = '\0';
    str = mirror ;
    printf("%s \n %s",str,mirror);
}