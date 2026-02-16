// You are using GCC
#include <stdio.h>
int main(){
    long long int n;
    long long int product =1;
    int digit;
    scanf("%lld",&n);
    if(n==0){
        product=0;
    }else{
        while(n>0){
            digit = n%10;
            product = product * digit;
            n=n/10;
        }
    }
    printf("%lld",product);
    
    return 0;
}