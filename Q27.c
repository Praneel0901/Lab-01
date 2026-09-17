//27
#include <stdio.h>
int main() {
    int n,p=1;
    printf("Enter a number: ");
    scanf("%d",&n);
   for (int i=2;i<=n/2;i++) {
        if (n%i==0){
            p=0;
            break;
        }
     }
   
if (p==1){
   printf("%d is a prime number.",n);
} else {
   printf("%d is not a prime number.",n);
   }
   return 0;
}
