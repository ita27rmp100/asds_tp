#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int N , sqrtN_int , i;
    printf("N = ");
    scanf("%i",&N);
    sqrtN_int = (int)sqrt(N) ;
    i=2;
    if(N%3 != 0 && N%2!=0 && N%5!=0){
        printf("%i",N);
    }
    else{
        while(i<=sqrtN_int){
        if( i==2 || i==3 || (i%3 != 0 && i%2!=0)){
            if(N%i == 0){
            printf("%i\n",i);
            N/i;
            }
            else{
                i++ ;
            }
        }
        i++;
        }
    }
}