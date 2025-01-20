#include <stdio.h>

int main() {
   int a,msb;
   scanf("%d",&a);
   msb=(a>>7)+1;
if(msb==1){
    printf("Set");
}
else{
    printf("Not Set");
}
    return 0;
}