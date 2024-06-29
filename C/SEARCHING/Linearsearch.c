#include <stdio.h>

int linear_search(int arr[],int size, int element){

    for(int i=0 ; i < size ; i++){
        if (arr[i]==element){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int arr[]={1,3,5,54,4,3,97,23};
    int size= sizeof(arr)/sizeof(int);
    int element=54;
    int searchindex = linear_search(arr,size,element);
    printf("the element %d was found at index %d\n",element,searchindex);
    return 0;
}
