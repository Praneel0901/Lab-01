//3
#include <stdio.h>
int main() {
    int hra,da,basic,gross;
    printf("Enter basic salary: ");
    scanf("%d",&basic);
    printf("Enter HRA: ");
    scanf("%d",&hra);
    printf("Enter DA: ");
    scanf("%d",&da);
    gross=basic+hra+da;
    printf("Gross salary=%d",gross);
    return 0;
}