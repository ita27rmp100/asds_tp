#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int a , b , rem , c ;
    printf("A = ");
    scanf("%i",&a);
    printf("B = ");
    scanf("%i",&b);
    c = 0;
    rem = a;
    while(rem>=b){
        rem = a - b ;
        a = rem;
        c++;
    }
    printf("%i = %i * %i + %i",a,b,c,rem);
    return 0;
}
