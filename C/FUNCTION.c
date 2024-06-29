#include<stdio.h>

void add(int*x,int*y){
    int c= *x + *y;
    printf("ADD IS :%d",c);
}

int main(){
    int a,b;
    printf("enter the value of A:");
    scanf("%d",&a);
    
    printf("enter the value of B:");
    scanf("%d",&b);
    
    add(&a,&b);
    
}