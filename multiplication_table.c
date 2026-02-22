// do while
#include <stdio.h>
int main(){
    int n;
    int sum;
    int i=1;
    scanf("%d",&n);
    do{
        sum = n*i;
        printf("%d x %d = %d",n,i,sum);
        i++;
    }while(i<=10);
    return 0;
}