#include <stdio.h>

int main() {
   int a,x;
   scanf("%d %d",&a,&x);
   printf("%d",(a>>x)&1);
    return 0;
}