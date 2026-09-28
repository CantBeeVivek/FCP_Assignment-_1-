#include <stdio.h>
int main() {
    float u, amt = 0;
    printf("Enter total units consumed: ");
    scanf("%f", &u);
    if (u <= 200) {
        amt = u * 0.50;
    } 
    else if (u <= 400) {
        amt = 100 + ((u - 200) * 0.65);
    } 
    else if (u <= 600) {
        amt = 230 + ((u - 400) * 0.80);
    } 
    else {
        amt = 425 + ((u - 600) * 1.25);
    }
    printf("Amount to be paid: Rs. %.2f\n", amt);
}
