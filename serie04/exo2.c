#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// function's declaration :
int power(int x , int n);


int main()
{
    // excecution :
    float sum = 1 ;
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
    printf("S = %f",sum);
    
    return 0;
}

// definig
int power(int x , int n){
    int result = 1;
    int i ;
    for(i=0;i<n;i++){
        result = result * x;
    }
    return result;
}