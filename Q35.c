//35
#include <stdio.h>
int main() {
    int n,remainder,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>=10){
        sum=0;
        while(n!=0){
            remainder=n%10;
            sum=sum+remainder;
            n=n/10;
        }
        n=sum;
    }
    printf("The single digit answer is: %d",n);
    return 0;
}