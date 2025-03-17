#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome in this simple script !\n");
    int a , b ;
    for(int i=0;i<=5;i++){
        printf("enter a and b : \n");
        scanf("%i \n %i",&a,&b);
        if(a<b){
            while(a<=b){
                printf("a-b = %i \n",a-b);
                a++;
            }
        }
        else if (a==b) {
            printf("a and b are similar \n");
        }
        else{
            switch(a-b){
                case 1 :
                    printf("a-b = 1 \n");
                    break ;
                case 2 :
                    printf("a-b = 2 \n");
                    break ;
                default :
                    printf("the difference between a and b is more than 2 \n");
                    break ;
            }
        }

    }
    return 0;
}