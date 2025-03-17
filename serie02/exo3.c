#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    // first question :
    float a ;
    scanf("%f",&a);
    (a>=0) ? printf("abs (%f) is : %f",a,a) : printf("abs (%f) is : %f",a,-a);
        // second question :
    char s1[32] , s2[32] , s3[32] , res[32] ;
    scanf("%s \n%s \n%s",&s1,&s2,&s3);
    if(strcasecmp(s1,s2)<0 && strcasecmp(s1,s3)<0){
            if(strcasecmp(s2,s3)<0){
                printf("the order : '%s' then '%s' then '%s' ",s1,s2,s3);
            }
            else{
                printf("the order : '%s' then '%s' then '%s' ",s1,s3,s2);
            }
    }
    else if(strcasecmp(s2,s1)<0 && strcasecmp(s2,s3)<0){
            if(strcasecmp(s1,s3)<0){
                printf("the order : '%s' then '%s' then '%s' ",s2,s1,s3);
            }
            else{
                printf("the order : '%s' then '%s' then '%s' ",s2,s3,s1);
            }
    }
    else if (strcasecmp(s3,s1)<0 && strcasecmp(s3,s2)<0){
            if(strcasecmp(s1,s2)<0){
                printf("the order : '%s' then '%s' then '%s' ",s3,s1,s2);
            }
            else{
                printf("the order : '%s' then '%s' then '%s' ",s3,s2,s1);
            }
    }
    return 0;
}
