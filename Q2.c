//2
#include <stdio.h>
void main() {
	float math,phy,chem,eng,cs,total,percent;
	printf("Enter marks of Maths: ");
	scanf("%f",&math);
	printf("Enter marks of Physics: ");
	scanf("%f",&phy);
	printf("Enter marks of Chemistry: ");
	scanf("%f",&chem);
	printf("Enter marks of English: ");
	scanf("%f",&eng);
	printf("Enter marks of CSC: ");
	scanf("%f",&cs);
	total=math+phy+chem+eng+cs;
	percent=total/5;
	printf("Total marks are:%f \n",total);
	printf("Percentage is:%f",percent);
}
