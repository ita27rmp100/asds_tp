#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
        char ope ;
        int a , b ;
        printf("To perform an addition , choose the ope : + \nTo perform an substruction , choose the ope : - \nTo perform an multiplication , choose the ope : * \nTo perform an division , choose the ope : / \n \n Coose question :");
        scanf("%c",&ope);
        printf("enter two integers : ");
        scanf("%i %i",&a,&b);
        // with switch :
        switch (ope){
            case '+' :
                printf("%i + %i = %i",a,b,a+b);
                break;
            case '-' :
                printf("%i - %i = %i",a,b,a+b);
                break;
            case '*' :
                printf("%i * %i = %i",a,b,a*b);
                break;
            case '/' :
                printf("%i / %i = %f",a,b,a/b);
                break;
            default :
                printf("invalid operation");
                break;
        }
        // if statement
        if(ope=='+'){printf("%i + %i = %i",a,b,a+b);}
        else if (ope=='-'){printf("%i - %i = %i",a,b,a-b);}
        else if(ope=='*'){printf("%i * %i = %i",a,b,a*b);}
        else if(ope=='/'){printf("%i / %i = %f",a,b,a/b);}
        else{printf("invalid operation");}
        //with if statement :
        char grade;
        printf("please enter your grade : ",grade);
        scanf("%c",&grade);
        printf("You got : ");
        switch (grade)
        {
            case 'A' :
                printf("excellent");
                break;
            case 'B' :
                printf("good");
                break;
            case 'C' :
                printf("fair");
                break;
            case 'D' :
                printf("passing");
                break;
            case 'F' :
                printf("failed");
                break;
            default :
                printf("invalid inputs , please enter correct degree .");
                break;
        }
        if(grade =='A'){
            printf("excellent");
        }
        else if(grade =='B'){
            printf("good");
        }
        else if(grade =='C'){
            printf("fair");
        }
        else if(grade =='D'){
            printf("pass");
        }
        else if(grade =='F'){
            printf("failed");
        }
        else{
            printf("invalid inputs , please enter correct degree .");
        }
    return 0;
}