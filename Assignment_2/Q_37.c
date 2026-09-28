#include <stdio.h>
int main()
{
    int count=9;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5;j++){
            if((j+i)<6){
                printf(" ");
            }
            else if((j+i)>=6){
                printf("%d",(i+j)-5);
            }
        }
        printf("\n");
    }
}
