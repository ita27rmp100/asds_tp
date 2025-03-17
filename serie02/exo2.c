#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int a , b , c ;
    printf("enter 3 nums : ");
    scanf("%i %i %i",&a,&b,&c);
    // version without else
    if(a>=b && a>=c){printf("%i is the maximum\n",a);}
    if(b>=a && b>=c){printf("%i is the maximum\n",b);}
    if(c>=a && c>=b){printf("%i is the maximum\n",c);}
    // version with else
    if (a>=b && a>=c){
        printf("%i is the maximum",a);
    }
    else{
        if(b>=a && b>=c){
            printf("%i is the maximum",b);
        }
        else{
            printf("%i is the maximum",c);
        }
    }
    return 0;
}
