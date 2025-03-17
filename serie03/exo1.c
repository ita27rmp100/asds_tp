#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int N , i , goten ;
    float grade ;
    goten = 0;
    printf("How many student you wanna enter their grades ? ");
    scanf("%i",&N);
    for(i=1;i<=N;i++){
        printf("Enter grade number (%i) : ",i);
        scanf("%f",&grade);
        if(grade>=0 && grade <= 20){
            if(grade>10)
            {
            goten++;
            }
        }
        else{
            printf("grades have to be between 0 and 20 ( this input is rejected ) \n");
            i--;
            }
    }
    if(N>0){printf("The number of grades that are above 10 is : %i",goten);}
    else{printf("Error");}
    return 0;
}
