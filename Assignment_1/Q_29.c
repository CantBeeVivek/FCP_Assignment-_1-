#include <stdio.h>
int main()
{
    int n,r,n1=0;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int p=n;
    while(n!=0){
        n1*=10;
        r=n%10;
        n1=n1+r;
        n=n/10;
    }
    if(p==n1){
    printf("%d is an PALINDROME number", p);
    }
    else{
        printf("%d is not an PALINDROME number", p);
    }
}
