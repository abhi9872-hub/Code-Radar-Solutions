#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    (ch>=97 && ch<=122)?printf("Lowercase"):printf("Uppercase");
    return 0;
}