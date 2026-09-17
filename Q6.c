//6
#include <stdio.h>
void main() {
	float a,b;
	printf("Enter the value of first number: ");
	scanf("%f",&a);
	printf("Enter the value of the second number: ");
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping: first number=%f,second number=%f",a,b);
}
