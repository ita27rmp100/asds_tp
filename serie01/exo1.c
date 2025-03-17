#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float D,A,P ;
    const float PI = 3.14 ;
    printf("Enter the diameter : ");
    scanf("%f",&D);
    scanf("%i \n %i", &P, &A);

    A = (D/2)*(D/2)*PI ;
    P = PI*D;

    printf("Area : %.2f \n Perimeter : %.2f \n ", A, P);

    return 0;
}
