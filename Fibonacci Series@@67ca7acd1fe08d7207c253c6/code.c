#include<stdio.h>
int fibonacciSeries(int N){
    if(N==0 || N==1){
        return 1;
    }
    else{
        return fibonacciSeries(N-1)+fibonacciSeries(N-2);
    }
}