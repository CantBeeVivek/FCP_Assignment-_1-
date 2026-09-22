#include <stdio.h>
int main()
{
    int n,i,ret;
    printf("Enter the number you want to check : ");
    scanf("%d", &n);
    if(n==1){
        printf("%d is not a prime munber",n);
    }        
    else if(n>1){
        for(i=2; i!=n; i++){
            if(n%i==0){
                ret=0;
                break;
            }
            else if(n%i!=0){
                ret=1;
            }
        }
    
    if(ret){
        printf("Is a Prime Number");
    }
    else printf("Is not a Prime Number");
    }
}
