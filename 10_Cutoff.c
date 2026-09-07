#include <stdio.h>

int main() {
    int M, P, C, E;
    printf("THE CUT OFF MARKS\n");
    printf("Enter Mathematics marks (out of 200): ");
    scanf("%d", &M);
    printf("Enter Physics marks (out of 200): ");
    scanf("%d", &P);
    printf("Enter Chemistry marks (out of 200): ");
    scanf("%d", &C);
    printf("Enter Entrance Examination marks (out of 100): ");
    scanf("%d", &E);
    printf("The Cut-off Mark is: %.3f", (M/2.0)+(P/2.0)+(C/2.0)+E);

    return 0;
}
