#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    // first question :
        float c ;
        printf("Enter a number : ");
        scanf("%f",&c);
        printf("Absolute value : %.2f \nSquare : %.2f \nExp value : %f \nthe integer part : %i \n",sqrt(c*c),pow(c,2),exp(c),(int)c);
        (c>=0) ? printf("the square root : %f \n",sqrt(c)):printf("*** cannot calculate the sqrt of negative num *** \n");
    // second question :
        char s1[32] , s2[32];
        printf("enter two strs : \n");
        scanf("%s \n %s",&s1,&s2);
        printf("%s %s \n",s1,s2);
        printf("length of first str is : %i letters . \n length of the second str is : %i",strlen(s1),strlen(s2));
    // third question :
    int a , b ;
    printf("enter a and b respectively : ");
    scanf("%i %i",&a,&b);
    printf("a = %i | b = %i \n",a,b);
    a = a + b ;
    b = a - b ;
    a = a - b;
    printf("After swapping :\n a = %i | b = %i",a,b);
    // fourth question :
    int a , b , c ;
    printf("Enter a , b , c respectively : \n");
    scanf("%i %i %i",&a,&b,&c);
    printf("----------------------\n U entered : a = %i | b = %i | c = %i \n ----------------------------- \n",a,b,c);
    printf("(-b+sqrt(b^(2)-4ac) = %f \n 2ae^(b+c) = %f \n 2^4 = %i \n 5^(ab)/bc = %f",
            (-b+sqrt(b*b-4*a*c)),
            (2*a*exp(b+c)),
            pow(2,4),
            (pow(5,a*b)/(b*c))
            );

    return 0;
}
