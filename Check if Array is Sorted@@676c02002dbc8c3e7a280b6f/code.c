#include<stdio.h>
int bubblesort(int arr[],int n){
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

// void printarray(int arr[],int n){
//     for(int k=0;k<n;k++){
//         printf("%d ",arr[k]);
//     }
//     printf("\n");
// }

int issorted(int arr,int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return o;
        }
        return 1;
    }
}



int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    bubblesort(arr,n);
    printarray(arr,n);
   if(issorted(arr,n)){
    printf("Sorted");
   }
   else{
    printf("Not Sorted");
   }

}









