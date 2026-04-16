// do while
#include <stdio.h>
int main(){
    int n;
    int ans;
    int i=1;
    scanf("%d",&n);
    do{
        ans = n*i;
        printf("%d x %d = %d",n,i,ans);
        i++;
    }while(i<=10);
    return 0;
}