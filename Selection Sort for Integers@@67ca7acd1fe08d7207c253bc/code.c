#include<stdio.h>
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] > arr[j+1]){
                mini=j;
            }
        }
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
            }
        }
    
    
void printArray(int arr[],int n){
            for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
            }
        }
    
