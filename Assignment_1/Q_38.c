#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i=1; i*i<=n; i+=1){
        printf("%d\t",i*i);
    }
    
}
