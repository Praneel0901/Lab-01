//1
#include <stdio.h>
void main() {
	float principal,rate,time,SI;
	printf("Enter the principal amount: ");
	scanf("%f",&principal);
	printf("Enter the rate: ");
	scanf("%f",&rate);
	printf("Enter the time period: ");
	scanf("%f",&time);
	SI=(principal*rate*time)/100;
	printf("The principal amount is: %f",SI);
	
}
