//20
#include <stdio.h>
int main() {
    float a,b,result;
    char op;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c",&op);
    printf("Enter second number: ");
    scanf("%f",&b);
    switch(op) {
        case'+':
            result=a+b;
            printf("Result is: %f",result);
            break;
        case'-':
            result=a-b;
            printf("Result is: %f",result);
            break;
        case'*':
            result=a*b;
            printf("Result is: %f",result);
            break;
        case'/':
            if(b!=0){
                result=a/b;
                printf("Result is: %f",result);
            } else {
                printf("Divison by 0 is not possible");
            }
            break;
        default:
            printf("Enter a valid operator");
        
    }
    return 0;
}