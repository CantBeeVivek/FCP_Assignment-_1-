#include <stdio.h>
int main()
{
    int n,r,n1=0;
    printf("Enter the Number : ");
    scanf("%d", &n);
    while(n!=0){
        r=n%10;
        n1=n1+r;
        n=n/10;
    }
    printf("Sum of the digits of the given number is %d", n1);
}
