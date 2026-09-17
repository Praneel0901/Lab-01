//17
#include <stdio.h>
int main() {
    int a,b,c,max;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    if(a>b && a>c){
        max=a;
        printf("Maximum number is: %d",max);
    } 
    else if(b>a && b>c){
        max=b;
        printf("Maximum number is: %d",max);
    } 
    else if(c>a && c>b){
        max=c;
        printf("Maximum number is: %d",max);
    }
    return 0;
}