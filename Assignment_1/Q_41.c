#include <stdio.h>
int main()
{
    int n,i,ret,arr[20],j=0;
    printf("Enter the number you want to check : ");
    scanf("%d", &n);
    printf("The prime factors of the numbers are : ");
    if(n>1){
        for(i=1; i<=n; i++){
            if(n%i==0){
                arr[j]=i;
                printf("%d\t", arr[j]);
                j++;
            }
        }
    } 
}
