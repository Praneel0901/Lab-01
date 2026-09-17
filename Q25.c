//25
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number to print the table of: ");
    scanf("%d",&n);
    for (int i=0;i<=10;i++){
        printf("%d*%d=%d \n",n,i,n*i);
    }
    return 0;
}