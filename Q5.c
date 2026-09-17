//5
#include <stdio.h>
void main() {
	float a,b,c;
	printf("Enter first number: ");
	scanf("%f",&a);
	printf("Enter second number: ");
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping: First=%f,Second=%f",a,b);	
}
