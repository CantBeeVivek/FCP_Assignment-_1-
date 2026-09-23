#include <stdio.h>

int main() {
    float p,r,t,si;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the annual rate of interest : ");
    scanf("%f", &r);
    printf("Enter the time period: ");
    scanf("%f", &t);
    si = (p*r* t)/100.0;
    printf("\n--- Summary ---\n");
    printf("Principal Amount : %.2f\n", p);
    printf("Interest Rate    : %.2f%%\n", r);
    printf("Time Period      : %.2f years\n", t);
    printf("Simple Interest  : %.2f\n", si);
    return 0;
}
