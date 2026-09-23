#include <stdio.h>
int main()
{
    int e=0,o=0,n;
    printf("Enter the value of N : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i+=2){
        o=o+i;
    }
    for(int i=2; i<=n; i+=2){
        e=e+i;
    }
    printf("The sum of the odd numbers from 1 to N are %d\n", o);
    printf("The sum of the even numbers from 1 to N are %d\n", e);
}
