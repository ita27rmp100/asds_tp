#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int sum , nod ,facto, N;
    printf("Enter : N = ");
    scanf("%i",&N);
    sum = 0;
    N = sqrt(N*N);
    int newN = N ;
    while(((int)N)>0){
        // calculate the factorial of each digit
        int i = N%10 ;
        int j;
        int factorial = 1;
        for(j=2;j<=i;j++){
            factorial = factorial * j ;
        }
        N = N/10;
        sum += factorial;
    }
    if(sum==newN){
        printf("%i is strong number",newN);
    }
    else{
        printf("not");
    }
    return 0;
}
