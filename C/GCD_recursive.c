#include <stdio.h>
int gcd(int a,int b){
    if (b!=0){
        return gcd(b,a%b);
    }
    else return a;
}
int main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    gcd(a,b);
    printf("HCF/GCD of %d and %d is:%d",a,b,gcd(a,b));
    
    return 0;

}