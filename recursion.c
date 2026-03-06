// print name 10 times
// #include <stdio.h>
// void name(int n){
//     printf("Sanvi\n");
//     n--;
//     if(n<1){
//         return;
//     }
//     name(n);
// }
// int main(){
//     name(10);
// }

// print nos from 1-10
// #include <stdio.h>
// void nos(int n){
//     printf("%d\n",n);
//     n++;
//     if(n==11){
//         return;
//     }
//     nos(n);
// }
// int main(){
//     nos(1);
// }

// print from 10 to 1
// #include <stdio.h>
// void nos(int n){
//     printf("%d\n",n);
//     n--;
//     if(n==0){
//         return;
//     }
//     nos(n);
// }
// int main(){
//     nos(10);
// }

// print from 21-40 only even
// #include <stdio.h>
// int nos(int n,int sum){
//     if(n%2==0){
//     sum+=n;
// }
//     n++;
//     if(n==41){
//         return sum;
//     }
//     nos(n,sum);
// }
// int main(){
//     printf("%d",nos(21,0));
// }

// QUESTIONS
// 1. CHECK NO. IS PRIME OR NOT 
// #include <stdio.h>
// int isPrime(int num, int i){
//     int ans=0;
//     if(num%i==0){
//         ans =1;
//     }
//     i++;
//     if (i==num){
//         return ans;
//     }
//     isPrime(num,i);

// }
// int main(){
//     int p =isPrime(17,2);
//     if(p){
//         printf(" Not Prime");
//     }else{
//         printf("Prime");
//     }
// }

// 2. PRINT LIST OF PRIME NOS. FROM 21 TO 40 
// #include <stdio.h>
// int isPrime(int n, int i)
// {
//     if (n <= 2)
//         return (n == 2);
//     if (n % i == 0)
//         return 0;
//     if (i * i > n)
//         return 1;

//     return isPrime(n, i + 1);
// }
// void print(int start, int end)
// {
//     if (start > end)
//         return;

//     if (isPrime(start, 2))
//         printf("%d ", start);

//     printPrimes(start + 1, end);
// }
// int main()
// {
//     printf("Prime numbers between 21 and 40 are:\n");
//     print(21, 40);
//     return 0;
// }

// 3. SUM OD ODD NOS. FROM 1 TO 50
// #include <stdio.h>
// int odd_sum(int n,int sum){
//     if (n%2!=0){
//         sum+=n;
//     }
//     n--;
//     if (n==0){
//         return sum;
//     }
//     odd_sum(n,sum);
// }
// int main(){
//     printf("%d",odd_sum(50,0));
// }

// 4. SUM OF ALL DIGITS OF NO.
// #include <stdio.h>
// int sum_digits(int n,int sum){
//     if (n==0){
//         return sum;
//     }
//     int mod = n%10;
//     sum+=mod;
//     sum_digits(n/10,sum);
// }
// int main(){
//     printf("%d",sum_digits(1234,0));
// }

// 5. SUM OF EVEN DIGITS OF NO. 
// #include <stdio.h>
// int sum_digits(int n,int sum){
//     if (n==0){
//         return sum;
//     }
//     int mod = n%10;
//     if (mod%2==0){
//     sum+=mod;}
//     sum_digits(n/10,sum);
// }
// int main(){
//     printf("%d",sum_digits(1234,0));
// }

// 6. PRODUCT OF ODD NOS. FROM 1-20
// #include <stdio.h>
// int odd_prod(int n,int prod){
//     if (n%2!=0){
//         prod*=n;
//     }
//     n--;
//     if (n==0){
//         return prod;
//     }
//     odd_prod(n,prod);
// }
// int main(){
//     printf("%d",odd_prod(20,1));
// }

// 7. SUM OF ALL PRIME NOS. FROM 1-20
#include <stdio.h>

int isPrime(int n, int i)
{
    if(n <= 2)
        return (n == 2);
    if(n % i == 0)
        return 0;
    if(i * i > n)
        return 1;
    return isPrime(n, i + 1);
}

int sumPrimes(int n)
{
    if(n < 2)
        return 0;

    if(isPrime(n, 2))
        return n + sumPrimes(n - 1);
    else
        return sumPrimes(n - 1);
}

int main()
{
    printf("Sum of prime numbers from 1 to 20 = %d", sumPrimes(20));
    return 0;
}

// 8. PRINT VOWELS FROM NAME 


// 9. PRINT NAME IN REVERSE ORDER

// 10.TOTAL NUMBER OF LETTERS FROM YOUR NAME 