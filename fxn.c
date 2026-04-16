// fxn declaration, definition, calling
// fxn reducability, reuasability

// 1. prime or not
// #include <stdio.h>
// #include <stdbool.h>
// bool prime(int a){
//     for (int i=2;i<a;i++){
//         if(a%i==0){
//             return false;
//         }
//         return true;
//     }
// }
// int main(){
//     int p=prime(13);
//     if(p){
//         printf("Number is prime");
//     }else{
//         printf("Number is not prime");
//     }
// }

// 2.sum of all even from 1-50
// #include <stdio.h>
// int sumeven(int a, int b){
//     int sum=0;
//     for(int i=a;i<=b;i++){
//         if(i%2==0){
//         sum+=i;}
//         else{
//             continue;
//         }
        
//     }
//     return sum;
// }
// int main(){
//     int ans=sumeven(1,50);
//     printf("%d",ans);
// }

// //3. print all odd nos from 1 to 20
// #include <stdio.h>
// int odd(){
//     for(int i=1;i<=20;i++){
//         printf("%d\n",i);
// }} 
// int main(){
//     odd();
// }

// 4.prime nos from 1-20
// #include <stdio.h>
// int prime(){
//     for(int i=2;i<=20;i++){
//         int temp=0;
//         for (int j=2;j<i;j++){
//             if(i%j==0){
//                 temp=1;
//             }
//         }
//         if (temp==0){
//             printf("%d\n",i);
//         }else{
//             continue;
//         }
//     }
// }
// int main(){
//     prime();
// }

// 5. find the sum of all digits of a number
// #include <stdio.h>
// int sum(int n){
//     int sum=0;
//     while(n>0){
//         int mod=n%10;
//         sum+=mod;
//         n=n/10;

//     }return sum;
// }
// int main(){
//     int ans= sum(123456);
//     printf("%d",ans);
// }

// 6. print pattern f
// #include <stdio.h>
// void f(){
//     for (int i=1;i<=5;i++){
//         for (int j=1;j<=5;j++){
//             if (i==1 || i==3 || j==1){
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
// }
// int main(){
//     f();
// }

// 7. even digits of a num
// #include <stdio.h>
// int even(int n){
//     while(n>0){
//         int mod = n%10;
//         if (mod%2==0){
//             printf("%d\n",mod);   
//         }
//         n=n/10;
//     }
// }
// int main(){
//     even(123456789);
// }

// // 8.pallendrome
// #include <stdio.h>
// void pal(int n){
//     int og=n;
//     int mod,rev=0;
//     while(n>0){
//         mod=n%10;
//         rev = 10*rev+mod;
//         n=n/10;
//     }
//     if(og==rev){
//         printf("Pallendrome");
//     }else{
//         printf("Not a Pallendrome");
//     }}
// int main(){
//     pal(13131);
// }

// 9 prime pallendrome
// #include <stdio.h>
// void pp(int n){
//     int digit;
//     int og =n;
//     int rev = 0;
//     int cond1=0;
//     int cond2=0;
//     while(n>0){
//         digit = n%10;
//         rev = rev * 10 + digit;
//         n=n/10;
//     }
//     printf("now number is %d and its reverse is %d\n",og,rev);
//     if (og==rev){
//         cond1=1;
//     }else{
//         cond1=0;
//     }
//     int temp =0;
//     for (int i=2;i<rev;i++){
//         if (rev%i==0){
//             temp =1;
//             break;
//         }
//     }
//     if (temp==0){
//         cond2=1;
//     }else{
//         cond2=0;
//     }
//     if (cond1&&cond2){
//         printf("Prime Palindrome");
//     }else if(cond1&&(!cond2)){}
// }
// int main(){
//     pp(11);
// }

// 10.product of odd digits
// #include <stdio.h>
// int prod(int n){
//     int pro=1;
//     while(n>0){
//         int mod = n%10;
//         if (mod%2!=0){
//             pro*=mod;
//         }
//         n=n/10;
//     }
// return pro;
// }
// int main(){
//     int ans=prod(1234);
//     printf("%d",ans);
// }

// 11. factorial
// #include <stdio.h>
// int fact(int num){
//     int fact = 1;
//     while(num>0){
//         fact*=num;
//         num= num-1;
//     }
//     return fact;
// }
// int main(){
//     int ans=fact(5);
//     printf("Factorial of number is: %d",ans);
// }


// 12. Fibonacci
// #include <stdio.h>
// void fib(int num){
//     int f=0,s=1,sum=0;
//     printf("%d %d ",f,s);
//     for (int i=1;i<=num-2;i++){
//         sum=f+s;
//         f=s;
//         s=sum;
//         printf("%d ",sum);
//     }
// }
// int main(){
//     fib(10);
// }

