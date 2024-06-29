// NON RECURSIVE
#include<stdio.h>
int main(){
    int fact=1,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    printf("factorial of Number %d is :%d",n,fact);

}