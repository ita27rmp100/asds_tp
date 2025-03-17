#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int r,p,x,b;
    printf("Enter A positive integer : ");
    scanf("%i",&x);
    p =1 ;
    b = 0 ;
    while(x!=0){
        r = x % 2 ;
        b = b + r * p;
        p = p * 10;
        x = (int)x/2;
    }
    printf("B = %i",b);
    return 0;
}
