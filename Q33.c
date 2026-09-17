//33
#include <stdio.h>
int main() {
    int n,num,max,min;
    printf("Enter total number of numbers: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    scanf("%d", &num);
    max = num;
    min = num;
    for (int i = 2; i <= n; i++){
        scanf("%d", &num);
        if (num > max){
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}