#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a , b ;
    float avg ;
    do{
        printf("Enter to positive integers : ");
        scanf("%i %i",&a,&b);
        if (a<0 || b<0){
            printf("---- Error ----\n");
        }
    }while (a<0 || b<0);
    if(a==0 && b==0){
        printf("No average");
    }
    else{
        avg = (float)(a+b)/2;
        printf("The average between %i and %i is : %.2f",a,b,avg);
    }

    return 0;
}
