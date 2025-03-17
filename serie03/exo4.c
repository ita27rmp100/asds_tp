#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int N,y,i,sum;
    printf("Enter : N = ");
    scanf("%i",&N);
    char str[30];
    char N_rev[30] = "";
    sprintf(str,"%d",N);
    y = 0 ;
    for(i=strlen(str);i>0;i--){
        N_rev[y] = str[i-1];
        y++;
    }
    N_rev[y] = '\0';
    printf("reverse : %s",N_rev);
    while(((int)N)>0){
        printf("%i\n",pow(10,i));
        printf("%i\n",N%10);
        printf("%i\n---\n",(N%10)*pow(10,i));
        sum += (N%10)*pow(10,i) ;
        i --;
        N = N/10;
    }
    return 0;
}
