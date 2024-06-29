#include<stdio.h>
int main() {
    int n,temp=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    
    for (int i=0; i<n ;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n ;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }
        }
    }
    
}