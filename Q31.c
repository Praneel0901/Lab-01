//31
#include <stdio.h>
int main() {
    int n,sum=0,remainder;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("The sum of all digits in the number is: %d",sum);
    return 0;
}