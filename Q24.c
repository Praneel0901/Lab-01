//24
#include <stdio.h>
#include <math.h>
int main() {
    float x,y,n;
    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("Enter your choice: ");
    scanf("%f",&n);
    if (n==1){
        y=1+x;
    } else if (n==2){
        y=1+x/n;
    } else if (n==3){
        y=1+pow(x,n);
    } else {
        y=1+n*x;
    }
    printf("Value of Y(x,n)=%f",y);
    return 0;
}