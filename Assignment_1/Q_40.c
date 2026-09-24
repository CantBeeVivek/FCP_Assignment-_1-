#include <stdio.h>
int main()
{
    /*
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
    */
    
    
    int a,b, sum=0,i,n;
    printf("Enter the number of numbers in the list : ");
    scanf("%d", &n);
    printf("Enter the numbers in the list : \n");
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        sum = sum + a;
        if(a<0){
            break;
        }
    }
    printf("The sum of the terms in the list is %d", sum);
}
