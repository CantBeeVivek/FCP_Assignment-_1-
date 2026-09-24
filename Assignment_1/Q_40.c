#include <stdio.h>
int main()
{
    int ls[14],sum=0,i;
    printf("Enter the numbers in the list : \n");
    for(i=0; i<=13; i++){
        scanf("%d",&ls[i]);
        if(ls[i]<0){
            sum = sum + ls[i];
            break;
        }
        else{
        sum = sum + ls[i];
        }
    }
    printf("SUM = %d", sum);
}
