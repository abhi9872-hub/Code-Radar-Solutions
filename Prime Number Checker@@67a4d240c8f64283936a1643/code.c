#include <stdio.h>
int isprime(int n){
    if(n%1==0 && n%n==0 && n%2!=0 && n%3!=0 && n%5!=0){
        prime=1;
    }
    
}
int main() {
    int prime=0;
    int n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%d\n",isprime(n));
    }
    return 0;
}