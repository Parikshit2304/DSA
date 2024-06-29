
#include <stdio.h>
//ASCENDING ORDER
int main() {
    int n=50,temp=0;
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
    printf("SORTED ARRAY:");
    for(int i=0; i<n ;i++){
        printf(" %d",arr[i]);
    } 

    return 0;
}
//DECENDING ORDER
/*int main() {
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
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }
        }
    }
    printf("SORTED ARRAY:");
    for(int i=0; i<n ;i++){
        printf(" %d",arr[i]);
    } 

    return 0;
}*/