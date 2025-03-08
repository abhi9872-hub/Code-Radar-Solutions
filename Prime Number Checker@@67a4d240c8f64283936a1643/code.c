#include <stdio.h>
int isprime(int n){
    if(n%1==0 && n%n==0 && n%2!=0 && n%3!=0 && n%5!=0){
        return 1;
    }
    else if(n==2 || n==3 || n==5){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&n);
        printf("%d\n",isprime(n));
    }
    return 0;
}