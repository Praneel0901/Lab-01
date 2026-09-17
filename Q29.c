//29
#include <stdio.h>
int main() {
    int n,real,remainder,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    real=n;
    while(n!=0){
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    if (rev==real){
        printf("The number is a palindrome");

    } else {
        printf("The number is not a palindrome");
    }
    return 0;
}