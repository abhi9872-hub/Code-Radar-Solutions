#include <stdio.h>

int main() {
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   (a+b>c || a+c>b || b+c>a)?printf("Valid"):printf("Invalid");
    return 0;
}