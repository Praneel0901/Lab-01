//18
#include <stdio.h>
int main() {
    int a,b,c,max;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Maximum is %d \n",max);
    return 0;
}