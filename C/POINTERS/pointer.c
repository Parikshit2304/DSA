#include<stdio.h>
int main(){
    int a=32;
    int *ptr=&a;
    int b=*ptr;
    printf("%p",&a);
}