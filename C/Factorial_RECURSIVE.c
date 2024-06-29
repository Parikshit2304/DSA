#include<stdio.h>

int factorial(int n){
    if(n==1){
        return 1;
        }
    else{
        return n*factorial(n-1);
    }    
}


int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    factorial(n);
    printf("Factorial of the number %d is:%d",n,factorial(n));
    

}