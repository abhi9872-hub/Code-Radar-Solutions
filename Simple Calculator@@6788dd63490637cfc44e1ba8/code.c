#include <stdio.h>

int main() {
    int a,b;
    char ch;
    scanf("%f %f %c",&a,&b,&ch);
switch(ch){
    case '+':
    printf("%f",a+b);
    break;

    case '-':
    printf("%f",a-b);
    break;

    case '*':
    printf("%f",a*b);
    break;

    case '/':
    printf("%f",a/b);
    break;

}
    return 0;
}