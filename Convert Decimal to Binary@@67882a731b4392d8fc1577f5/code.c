#include <stdio.h>

int main() {
 int a;
 scanf("%d",&a);
 printf("%d",(a>>4)&1);
    return 0;
}