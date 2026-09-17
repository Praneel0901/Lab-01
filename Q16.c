//16
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    if(a>=b) {
        if(a>=c){
            printf("Maximum is %d \n",a);
        } else {
            printf("Maximum is %d \n",c);
        }
    } else {
        if (b>=c) {
            printf("Maximum is %d \n",b);
        } else {
            printf("Maximum is %d \n",c);
        }
    }
    return 0;
}