// print sum of numbers
// #include <stdio.h>
// int main(){
//     int n=2564;
//     int sum=0;
//     while (n>0){
//         int mod= n%10;
//         sum = sum+mod;
//         n = n/10;
//     }
//     printf("%d",sum);
// }

// product of odd digits
// #include <stdio.h>
// int main(){
//     int n=2578;
//     int prod=1;
//     while (n>0){
//         int mod= n%10;
//         if (mod%2!=0){
//         prod = prod*mod;
//         }
//         n = n/10;
//     }
//     printf("%d",prod);
// }

// print number in rev order
// #include <stdio.h>
// int main(){
//     int n=2564;
//     while (n>0){
//         int mod= n%10;
//         printf("%d",mod);
//         n = n/10;
//     }
// }

// pallendrome checker
#include <stdio.h>
int main(){
    int a = 12121;
    int og = a;
    int reverse=0;
    int mod;
    while (a>0){
        int mod= a%10;
        reverse=reverse*10+mod;
        a = a/10;
    }
    if(reverse==og){
        printf("Pallendrome number");
    }else{
        printf("Not a Pallendrome number");
    }
}

// armstrong number 
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n=153;
//     int og = n;
//     int sum=0;
//     while (n>0){
//         int mod= n%10;
//         sum = sum+mod*mod*mod;
//         n = n/10;
//     }
//     printf("sum is %d and number is %d\n",sum,og);
//     if(sum==og){
//         printf("Armstrong NUmber");
//     }else{
//         printf("Not an armstrong number");
//     }
// }


// largest among the sum of even digits and sum of odd digits if a numbers
// #include <stdio.h>
// int main(){
//     int n=2578;
//     int sum1=0;
//     int sum2=0;
//     while (n>0){
//         int mod= n%10;
//         if (mod%2!=0){
//         sum1 = sum1+mod;
//         }else{
//             sum2=sum2+mod;
//         }
//         n = n/10;
//     }
//     if(sum1>sum2){
//         printf("Sum of odd nos is %d and is greater",sum1);
//     }else{
//         printf("Sum of odd nos is %d and is greater",sum2);
//     }
// }

// diff btw the diff of even digits and sum of odd digits if a numbers
// #include <stdio.h>
// int main(){
//     int diff, n=2578;
//     int sum1=0;
//     int sum2=0;
//     while (n>0){
//         int mod= n%10;
//         if (mod%2!=0){
//         sum1 = sum1+mod;
//         }else{
//             sum2=sum2+mod;
//         }
//         n = n/10;
//     }
//     if(sum1>sum2){
//         diff= sum1-sum2;
//     }else{
//         diff=sum2-sum1;
//     }
//     printf("Diff is %d",diff);
// }