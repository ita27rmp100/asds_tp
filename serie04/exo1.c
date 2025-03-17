#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// function's declaration :
int getIntPart(float n);
float getFloatPart(float n);

int main()
{
    //Execution part
    float x ;
    scanf("%f",&x);
    printf("integer part : %i\n",getIntPart(x));
    printf("float part : %f",getFloatPart(x));
    return 0;
}

// function defining
int getIntPart(float n){
    int x = n ;
    return x;
}