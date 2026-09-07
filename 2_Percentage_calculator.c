#include <stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("      PERCENTAGE CALCULATOR      \n");
    printf("Please enter your marks out of 100 \n");
    printf("Enter your marks in subject 1: ");
    scanf(" %f",&a);
    printf("Enter your marks in subject 2: ");
    scanf(" %f",&b);
    printf("Enter your marks in subject 3: ");
    scanf(" %f",&c);
    printf("Enter your marks in subject 4: ");
    scanf(" %f",&d);
    printf("Enter your marks in subject 5: ");
    scanf(" %f",&e);
    if(a>100||b>100||c>100||d>100||e>100 ){
        printf("You entered marks greater than 100");}
    else{
        printf("Your total Marks are : %.2f \n", a+b+c+d+e);
        printf("Your percentage is : %.2f", (a+b+c+d+e)/5.0);}
    return 0;
}
