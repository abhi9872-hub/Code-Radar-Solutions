// Your code here...
#include<stdio.h>
int bubblesort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void printarray(int n,int arr[]){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}



