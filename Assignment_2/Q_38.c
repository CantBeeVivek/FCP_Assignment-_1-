#include <stdio.h>
int main()
{
    int count=9;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5;j++){
            if((i+j)>=6){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int j=6; (j-i)!=5; j++){
            printf("*");
        }
        printf("\n");
    }
}
