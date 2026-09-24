#include <stdio.h>
int main()
{
    int n,r,sum=0,sum1=0;
    printf("Enter the Number : ");
    scanf("%d", &n);
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    do{
    while(sum!=0){
        r=sum%10;
        sum1=sum1+r;
        sum=sum/10;
    }}
    while(sum1>9);
    printf("Sum of the digits of the given number is %d", sum1);
}
