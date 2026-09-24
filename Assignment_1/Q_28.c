#include <stdio.h>
int main()
{
    int n,r,p=0,q;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int m=n,n1=n;
    while(n!=0){
        r=n%10;
        for (q=1,m=n1; m!=0; q=q*r){
            m=m/10;
        }
        
        p=p+q;
        n=n/10;
    }
    if(p==n1){
    printf("%d is an ARMSTRONG number", n1);
    }
    else{
        printf("%d is not an ARMSTRONG number", n1);
    }
}
