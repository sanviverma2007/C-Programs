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
// using for loop
// for (int num=2568;num>0;num=num/10){
    //     rem = num%10;
    //     sum+=rem;
    // }
    // printf("%d",sum);


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
//     int rem,a = 3456;
//     int rev = 0;
//     while(a>0){
//         rem = a%10;
//         rev= rev*10+rem;
//         a=a/10;
//     }
//     printf("%d",rev);
// }


// pallendrome checker
// #include <stdio.h>
// int main(){
//     int digit, n = 12121;
//     int og =n;
//     int rev = 0;
//     while(n>0){
//         digit = n%10;
//         rev = rev * 10 + digit;
//         n=n/10;
//     }
//     printf("now number is %d and its reverse is %d\n",og,rev);
//     if (og==rev){
//         printf("%d is an armstrong number",og);
//     }else{
//         printf("%d is not an armstrong number",og);
//     }
// }


// armstrong number checker
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int dig, digits=0;
//     int num = 153;
//     int og = num;
//     int sum=0;
//     while(num>0){
//         digits+=1;
//         num=num/10;
//     }
//     num=og;
//     printf("no. of digits is %d\n",digits);
//     while(num>0){
//         dig = num%10;
//         sum+=(int)(pow(dig,digits)+0.5);
//         num=num/10;
//     }
//     printf("sum is %d\n", sum);
//     if (sum==og){
//         printf("The number %d is armstrong",og);
//     }else{
//         printf("The number %d is not an armstrong number",og);
//     }
// }
    


// // largest among the sum of even digits and sum of odd digits if a numbers
// // #include <stdio.h>
// // int main(){
// //     int n=2578;
// //     int sum1=0;
// //     int sum2=0;
// //     while (n>0){
// //         int mod= n%10;
// //         if (mod%2!=0){
// //         sum1 = sum1+mod;
// //         }else{
// //             sum2=sum2+mod;
// //         }
// //         n = n/10;
// //     }
// //     if(sum1>sum2){
// //         printf("Sum of odd nos is %d and is greater",sum1);
// //     }else{
// //         printf("Sum of odd nos is %d and is greater",sum2);
// //     }
// // }

// // diff btw the diff of even digits and sum of odd digits if a numbers
// // #include <stdio.h>
// // int main(){
// //     int diff, n=2578;
// //     int sum1=0;
// //     int sum2=0;
// //     while (n>0){
// //         int mod= n%10;
// //         if (mod%2!=0){
// //         sum1 = sum1+mod;
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

// 2578 28 57
// #include <stdio.h>
// int main(){
//     int digit,n= 2578;
//     int reve=0;
//     int revo=0;
//     while(n>0){
//         digit=n%10;
//         if (digit%2==0){
//             reve=reve*10+digit;
//         }else{
//             revo=revo*10+digit;
//         }
//         n=n/10;
//     }
//     printf("%d\n",reve);
//     printf("%d\n",revo);
}
