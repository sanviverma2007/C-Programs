//1. prime number
// #include <stdio.h>
// int main(){
//     int num = 17;
//     int temp =0;
//     for (int i=2;i<num;i++){
//         if (num%i==0){
//             temp =1;
//             break;
//         }
//     }
//     if (temp==0){
//         printf("%d is a Prime Number",num);
//     }else{
//         printf("%d is Not a Prime Number",num);
//     }
// }

//2.  print all prime nos btw 21 -50
// #include <stdio.h>
// int main(){
//     for (int i=21;i<50;i++){
//         int temp=0;
//         for (int j=2;j<i;j++){
//             if(i%j==0){
//                 temp=1;
//                 break;
//             }
        
//         }
//         if(temp==0){
//         printf("%d\n",i);
//         }
//     }}

// //3. count total nos ntw 11-40
// #include <stdio.h>
// int main(){
//     int count=0;
//     for (int i=11;i<40;i++){
//         int temp=0;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 temp =1;
//                 break;
//             }
//         }
//         if(temp==0){
//             count+=1;
//         }
//     }
//     printf("%d",count);
// }

//4. sum of prime numbers 21-40
// #include <stdio.h>
// int main(){
//     int sum=0;
//     for (int i=21;i<40;i++){
//         int temp=0;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 temp =1;
//                 break;
//             }
//         }
//         if(temp==0){
//             sum+=i;
//         }
//     }
//     printf("%d",sum);
// }

// 5.product of prime nos 1-10
// #include <stdio.h>
// int main(){
//     int prod=1;
//     for (int i=1;i<10;i++){
//         int temp=0;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 temp =1;
//                 break;
//             }
//         }
//         if(temp==0){
//             prod*=i;
//         }
//     }
//     printf("%d",prod);
// }

//6. find the prime number which is next to n
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=n;;i++){
//         int temp=0;
//         for (int j =2;j<i;j++){
//             if(i%j==0){
//                 temp=1;
//                 break;
//             }
//         }
//         if (temp==0){
//             printf("%d",i);
//             break;
//         }
        
//     }
// }
    // 7. find prime number previous to n
//     #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=n;;i--){
//         int temp=0;
//         for (int j =2;j<i;j++){
//             if(i%j==0){
//                 temp=1;
//                 break;
//             }
//         }
//         if (temp==0){
//             printf("%d",i);
//             break;
//         }
        
//     }}

// 8. check reverse number is prime or not;
// #include <stdio.h>
// int main(){
//     int num = 12345;
//     int rem;
//      int temp =0;
//     int rev = 0;
//     while(num>0){
//         rem = num%10;
//         rev= rev*10+rem;
//         num=num/10;
//     }
//     printf("reverse of num is %d\n",rev);
//     for (int i=2;i<rev;i++){
//         if (rev%i==0){
//             temp =1;
//             break;
//         }
//     }
//     if (temp==0){
//         printf("%d is a Prime Number",rev);
//     }else{
//         printf("%d is Not a Prime Number",rev);
//     }
// }

// 9. total number of prime digits in a num
// #include  <stdio.h>
// int main(){
//     int digit, n=789654;
//     int count=0;
//     while(n>0){
//         digit = n%10;
//         int temp=0;
//         for(int i=2;i<digit;i++){
//             if(digit%i==0){
//                 temp=1;
//                 break;
//             }
//         }
//         if (temp==0){
//             count+=1;
//         }
//         n=n/10;
//     }
//     printf("number of prime digits %d",count);
// }

// 10. product of digits is prime or not
// #include <stdio.h>
// int main(){
//     int rem,n=1121;
//     int prod=1;
//     while(n>0){
//         rem=n%10;
//         prod*=rem;
//         n=n/10;
//     }
//     printf("Product of num is %d",prod);
//     int temp=0;
//     for (int i=2;i<=prod;i++){
//         if(prod%i==0){
//             temp=1;
//             break;
//         }
//     }
//     if (temp==0){
//         printf("%d is prime",prod);
//     }else{
//         printf("%d is not prime",prod);
//     }
// }

// 11. sum of digits is prime
// #include <stdio.h>
// int main(){
//     int rem,n=1121;
//     int sum=0;
//     while(n>0){
//         rem=n%10;
//         sum+=rem;
//         n=n/10;
//     }
//     printf("sum of num is %d",sum);
//     int temp=0;
//     for (int i=2;i<=sum;i++){
//         if(sum%i==0){
//             temp=1;
//             break;
//         }
//     }
//     if (temp==0){
//         printf("%d is prime\n",sum);
//     }else{
//         printf("%d is not prime",sum);
//     }
// }

// 12 prime palendrome
#include <stdio.h>
int main(){
    int digit, n = 12121;
    int og =n;
    int rev = 0;
    int cond1=0;
    int cond2=0;
    while(n>0){
        digit = n%10;
        rev = rev * 10 + digit;
        n=n/10;
    }
    printf("now number is %d and its reverse is %d\n",og,rev);
    if (og==rev){
        cond1=1;
    }else{
        cond1=0;
    }
    int temp =0;
    for (int i=2;i<rev;i++){
        if (rev%i==0){
            temp =1;
            break;
        }
    }
    if (temp==0){
        cond2=1;
    }else{
        cond2=0;
    }
    if (cond1&&cond2){
        printf("Prime Palindrome");
    }else if(cond1&&(!cond2)){}
}


// 13 freq
// #include <stdio.h>
// int main() {
//     int n, temp, digit, i, j, count, isPrime;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(i = 0; i <= 9; i++) {     // check for each digit (0–9)
//         count = 0;
//         temp = n;

//         for(; temp > 0; temp /= 10) {
//             digit = temp % 10;
//             if(digit == i)
//                 count++;
//         }

//         if(count > 0) {
//             isPrime = 1;

//             if(count <= 1)
//                 isPrime = 0;

//             for(j = 2; j <= count/2; j++) {
//                 if(count % j == 0) {
//                     isPrime = 0;
//                     break;
//                 }
//             }

//             if(isPrime)
//                 printf("Digit %d appears %d times (Prime)\n", i, count);
//             else
//                 printf("Digit %d appears %d times (Not Prime)\n", i, count);
//         }
//     }

//     return 0;
// }