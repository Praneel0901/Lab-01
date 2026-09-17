//42
#include <stdio.h>
int main() {
    int n,p=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            p=1;
            break;
        
        }
    }
    if (p==0){
        printf("%d is a Prime Number.",n);
    }else{
        printf("%d is a Composite Number.",n);
    }
    return 0;
}