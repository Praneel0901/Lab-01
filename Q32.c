//32
#include <stdio.h>
int main() {
    int n,num,max,secmax;
    printf("Enter total number of numbers: ");
    scanf("%d",&n);
    printf("Enter %d numbers:\n", n);
    scanf("%d", &num);
    max = num;
    secmax = num;
    for(int i=2;i<=n;i++){
        scanf("%d",&num);
        if (num > max){
            secmax = max;
            max = num; }
        else if (num > secmax && num != max) {
            secmax = num;}
    }
    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d\n", secmax);
    return 0;
}