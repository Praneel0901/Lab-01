//28
#include <stdio.h>
#include <math.h>
int main() {
    int n,real,remainder,total=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    real=n;
    while(n!=0){
        remainder=n%10;
        total=total+(remainder*remainder*remainder);
        n=n/10;
    }
    if (total==real){
        printf("The number is an armstrong number.");
    } else {
        printf("The number is not an armstrong number.");
    }
    return 0;
}