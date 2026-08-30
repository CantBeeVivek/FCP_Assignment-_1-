#include <stdio.h>

int main() {
    
    int total;
    printf("Enter the time you want to convert from seconds to days, hours, minutes and seconds: ");
    scanf("%d",&total);
    int day=total/86400;
    int r=total%86400;
    int hours=r/3600;
    int ri=r%3600;
    int minute=ri/60;
    int rim=ri%60;
    int second=rim;
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("Time entered by you : %d\n",total);
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("It can also be expressed as\n");
    printf("Days        :%d days\n",day);
    printf("Hours       :%d hours\n",hours);
    printf("Minutes     :%d minutes\n",minute);
    printf("Seconds     :%d seconds",second);
    printf("\n\n%d days :: %d hours :: %d minutes :: %d seconds",day,hours,minute,second);
}


