//39
#include <stdio.h>
int main() {
    int n,i=1;
    float sum=0.0;
    float fact=1.0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i;i<=n;i++){
        fact=fact*i;
        sum=sum+(i/fact);
    }
    printf("Sum of series is: %f",sum);
    return 0;
}