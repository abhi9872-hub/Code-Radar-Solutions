#include <stdio.h>
int isPrime(int n){
    if(n%1==0 && n%n==0 && n%2!=0 && n%3!=0 && n%5!=0 && n!=1 && n%7!=0){
        return 1;
    }
    else if(n==2 || n==3 || n==5){
        return 1;
    }
    else if(n==1){
        return 0;
    }
    else{
        return 0;
    }
    
}
