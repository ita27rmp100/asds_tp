#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int N , sum , nod ;
    printf("Enter : N = ");
    scanf("%i",&N);
    nod = 0;
    N = sqrt(N*N);
    while(((int)N)>0){
        sum += N%10 ;
        nod ++;
        N = N/10;
    }
    printf("Number of digits in N is : %i \n The sum of its digits is : %i",nod,sum);
    return 0;
}
