//40
#include <stdio.h>
int main() {
    int sum=0,i;
    printf("Enter a number: ");
    scanf("%d",&i);
    while(i>=0){
        sum=sum+i;
        printf("Enter a number: ");
        scanf("%d",&i);
        
    }
    printf("Sum of numbers entered is: %d",sum);
    return 0;
}