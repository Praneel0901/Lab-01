//15
#include <stdio.h>
int main() {
    float a,b,c,d,e,total,sum;
    printf("Enter first subject marks: ");
    scanf("%f",&a);
    printf("Enter second subject marks: ");
    scanf("%f",&b);
    printf("Enter third subject marks: ");
    scanf("%f",&c);
    printf("Enter fourth subject marks: ");
    scanf("%f",&d);
    printf("Enter fifth subject marks: ");
    scanf("%f",&e);
    sum=a+b+c+d+e;
    total=sum/5;
    if (total>=90){
        printf("You got A division.");
    } else if(total>=80 && total<=90){
        printf("You got B division.");
    } else if(total>=70 && total<=80){
        printf("You got C divison");
    } else if(total>=60 && total<=70){
        printf("You got D division.");
    } else if(total>=0 && total<60){
        printf("You Failed.");
    }
    return 0;
}