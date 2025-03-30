// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=n-1;i>=1;i--){
        for(int k=1;k<=n-i){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*")
        }
        printf("\n");
    }



}