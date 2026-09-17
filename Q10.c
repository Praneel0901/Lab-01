//10
#include <stdio.h>
int main() {
	float m,p,c,e,cm;
	printf("Enter marks in Maths: ");
	scanf("%f",&m);
	printf("Enter marks in Physics: ");
	scanf("%f",&p);
	printf("Enter marks in Chemistry: ");
	scanf("%f",&c);
	printf("Enter marks in Entrance examination: ");
	scanf("%f",&e);
	cm=(m/2)+(p/2)+(c/2)+e;
	printf("Cut off marks of the student is: %f",cm);
	return 0;
	
}
