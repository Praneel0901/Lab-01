//8
#include <stdio.h>
int main() {
	int total=31558150;
	int days,hours,mins;
	days=total/86400;
	hours=total/3600;
	mins=total/60;
	printf("Days: %d\n",days);
	printf("Hours: %d\n",hours);
	printf("Mintues: %d\n",mins);
	return 0;
}
