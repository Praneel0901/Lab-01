//26
#include <stdio.h>
int main() {
    int n,so=0,se=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        if (i%2==0){
            se+=i;
        } else {
            so+=i;
        }
    }
    printf("The sum of even numbers from 1 to %d is: %d \n",n,se);
    printf("The sum of odd numbers from 1 to %d is: %d \n",n,so);
    return 0;
}