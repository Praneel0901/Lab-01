//9
#include <stdio.h>
int main() {
	int hours,mins,secs;
	printf("Enter hours: ");
	scanf("%d",&hours);
	printf("Enter minutes: ");
	scanf("%d",&mins);
	printf("Enter seconds: ");
	scanf("%d",&secs);
	printf("Total time in seconds: %d",(hours*3600)+(mins*60)+secs);
	return 0;
}
