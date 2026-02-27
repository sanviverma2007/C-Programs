// prime number
#include <stdio.h>
int main(){
    int num = 17;
    int temp =0;
    for (int i=2;i<num;i++){
        if (num%i==0){
            temp =1;
            break;
        }
    }
    if (temp==0){
        printf("%d is a Prime Number",num);
    }else{
        printf("%d is Not a Prime Number",num);
    }
}