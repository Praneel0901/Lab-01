//30
#include <stdio.h>
int main() {
    int n,remainder,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    printf("The reverse of the number is: %d",rev);
    return 0;
}