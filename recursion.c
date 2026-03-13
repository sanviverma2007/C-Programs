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
// void printNum(int n)
// {
//     if(n == 0)
//         return;

//     printNum(n - 1);//fxn call stack memory
//     printf("%d ", n);//executes after call is done
// }
// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     printNum(n);

//     return 0;
// }

// print from 10 to 1
#include <stdio.h>
void printNum(int n)
{
    if(n == 0)
        return;
    printf("%d ", n);
    printNum(n - 1);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printNum(n);
    return 0;
}

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
// int isPrime(int num, int i)
// {
//     if(num <= 2)
//         return (num == 2);//imp concept for 2 as a prime number
//     if(num % i == 0)
//         return 0;
//     if(i * i > num)
//         return 1;
//     return isPrime(num, i + 1);
// }
// int main()
// {
//     int p = isPrime(18, 2);
//     if(p)
//         printf("Prime");
//     else
//         printf("Not Prime");
//     return 0;
// }

// 2. PRINT LIST OF PRIME NOS. FROM 21 TO 40 
// #include <stdio.h>
// int isPrime(int num, int i)
// {
//     if(num <= 2)
//         return (num == 2);//imp concept for 2 as a prime number
//     if(num % i == 0)
//         return 0;
//     if(i * i > num)
//         return 1;
//     return isPrime(num, i + 1);}
// void printprime(int n){
//     if (n>40){
//         return;
//     }
//     if (isPrime(n,2)){
//         printf("%d ",n);
//     }
//     printprime(n+1);
// }
// int main(){
//     printprime(21);
// }

// // 3. SUM OD ODD NOS. FROM 1 TO 50
// #include <stdio.h>
// int sumOdd(int n)
// {
//     if(n <= 0)
//         return 0;
//     if(n % 2 != 0)
//         return n + sumOdd(n - 2);
//     return sumOdd(n - 1);
// }
// int main()
// {
//     int result = sumOdd(50);
//     printf("Sum = %d", result);
//     return 0;
// }

// 4. SUM OF ALL DIGITS OF NO.
// #include <stdio.h>
// int sum_digits(int n){
//     if (n==0){
//         return 0;
//     }
//     int mod = n%10;
//     return mod+ sum_digits(n/10);
// }
// int main(){
//     printf("%d",sum_digits(1234));
// }

// 5. SUM OF EVEN DIGITS OF NO. 
// #include <stdio.h>
// int sum_digits(int n){
//     if (n==0){
//         return 0;
//     }
//     int mod = n%10;
//     if (mod%2==0){
//     return mod + sum_digits(n/10);}
//     else{
//         return sum_digits(n/10);
//     }
// }
// int main(){
//     printf("%d",sum_digits(1234));
// }

// 6. PRODUCT OF ODD NOS. FROM 1-20
// #include <stdio.h>
// long long prodOdd(int n){
//     if(n <= 1)
//         return 1;
//     if(n % 2 == 0)
//         return prodOdd(n - 1);
//     return n * prodOdd(n - 2);
// }
// int main(){
//     printf("Product = %lld", prodOdd(20));
//     return 0;
// }


// 7. SUM OF ALL PRIME NOS. FROM 1-20
// #include <stdio.h>
// int isPrime(int n, int i){
//     if(n <= 2)
//         return (n == 2);
//     if(n % i == 0)
//         return 0;
//     if(i * i > n)
//         return 1;
//    return isPrime(n, i + 1);
// }
// int sumPrimes(int n){
//     if(n < 2)
//         return 0;
//     if(isPrime(n, 2))
//         return n + sumPrimes(n - 1);
//     return sumPrimes(n - 1);
// }
// int main(){
//     printf("Sum = %d", sumPrimes(20));
//     return 0;
// }

// 8. PRINT VOWELS FROM NAME 
// #include <stdio.h>
// void printVowels(char str[], int i){
//     if(str[i] == '\0')
//         return;
//     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
//        str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
//         printf("%c ", str[i]);
//     }
//     printVowels(str, i + 1);
// }
// int main(){
//     char name[50];
//     printf("Enter name: ");
//     scanf("%s", name);
//     printVowels(name, 0);
//     return 0;
// }

// 9. PRINT NAME IN REVERSE ORDER
// #include <stdio.h>
// void name(char str[],int i){
//     if (str[i]=='\0'){
//         return;
//     }else {
//         name(str,i+1);
//         printf("%c",str[i]);
//     }
// }
// int main(){
//     char s[50] = "sanvi";
//     // scanf("%s",s);
//     name(s,0);
// }

// 10.TOTAL NUMBER OF LETTERS FROM YOUR NAME 
// #include <stdio.h>
// int sum(char str[],int i){
//     if (str[i]=='\0'){
//         return 0;
//     }
//     return 1+sum(str,i+1);
// }
// int main(){
//     char s[50]="Sanvi";
//     printf("%d",sum(s,0));
// }

