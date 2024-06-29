
#include <stdio.h>

int main() {
    int n,arr[n];
    printf("enter the number of elements:");
    scanf("%d",&n);
    for (int i=0; i<n ;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n ;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("Duplicate element is:%d",arr[j]);
                
                
                
            }
        }
    }
    return 0;
}