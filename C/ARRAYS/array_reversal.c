#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        brr[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        
        printf("%d,",brr[i]);
}
}