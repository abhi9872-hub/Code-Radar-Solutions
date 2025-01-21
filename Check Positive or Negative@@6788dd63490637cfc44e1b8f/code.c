#include <stdio.h>

int main() {
    int b;
    scanf("%d",&b);
if(b>0){
    printf("Positive");
}
else if(b<0){
    printf("Negative");
}
else{
    printf("Zero");
}
    return 0;
}