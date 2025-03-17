#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// exo 1 functions declaration :
int getIntPart(float n);
float getFloatPart(float n);
// exo 2 functions declaration :
int power(int x , int n);
// exo 3 functions declarations :
void mirrorWord(char str[100]);
// exo 4 functions declarations :
int isPalindrome(char str[100]);


int main()
{
    //exo 1 excecution :
    /*float x ;
    scanf("%f",&x);
    printf("integer part : %i\n",getIntPart(x));
    printf("float part : %f",getFloatPart(x));*/

    // exo 2 excecution :
    /*float sum = 1 ;
    int i , x , N , numirator , denumerator ;
    printf("x = ");
    scanf("%i",&x);
    printf("N = ");
    scanf("%i",&N);
    for(i=1;i<=N;i++){
        numirator = i * power(-1,i);
        denumerator = power(x,i) + i ;
        sum += (float) numirator / denumerator ;
    }
    printf("S = %f",sum);*/
    //exo 3 execution :
    /*char word[30] ;
    scanf("%s",&word);
    mirrorWord(word);*/
    // char word[30] ;
    // scanf("%s",&word);
    // if(check == 1){
    //     printf("this word is palindrome");
    // }else{
    //     printf("this word isn't palindrome");
    // }
    char x[30] = "1";
    int i = atoi(x);
    printf("%i",x);
    return 0;
}

// exo 1 function defining
int getIntPart(float n){
    int x = n ;
    return x;
}
float getFloatPart(float n){
    return (n - getIntPart(n));
}
// exo 2 function definition :
int power(int x , int n){
    int result = 1;
    int i ;
    for(i=0;i<n;i++){
        result = result * x;
    }
    return result;
}
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
// exo 4 function definition :
int isPalindrome(char str[100]){
    int y = 0 ;
    //int check ;
    char mirror[100]="";
    int x = strlen(str)-1;
    for(x;x>=0;x--){
        mirror[y] = str[x];
        y++;
    }
    mirror[y] = '\0';
    //check = (str==mirror);
    return (str==mirror) ;
}