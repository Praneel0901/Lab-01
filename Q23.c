//23
#include <stdio.h>
int main() {
    int base,pow,total=1;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter power: ");
    scanf("%d",&pow);
    for (int i=0;i<pow;i++) {
        total=total*base;
    }
    printf("Result: %d\n",total);
    return 0;
}