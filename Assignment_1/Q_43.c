#include <stdio.h>

int main() {
    double s, comm = 0.0;

    printf("Enter sales amount (Rs.): ");
    scanf("%lf", &s);
    if (s <= 500) {
        comm = s * 0.05;
    } 
    else if (s <= 2000) {
        comm = 35 + ((s - 500) * 0.10);
    } 
    else if (s <= 5000) {
        comm = 185 + ((s - 2000) * 0.12);
    } 
    else {
        comm = s * 0.125;
    }
    printf("Commission: Rs. %.4f\n", comm);
}
