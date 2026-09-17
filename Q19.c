//19
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    (ch>='a' && ch<='z')? printf("It is a small case character. \n"):printf("It is a big case character. \n");
    return 0;
}