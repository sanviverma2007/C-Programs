#include <stdio.h>
// int main(){
//     int sum=0;
//     for(int i=1;i<=10;i++){
//         sum+=i;
//     }
//     printf("%d",sum);
// }



//ques1 list nos from 21-40 without nos divisible by 3
// int main(){
//     for(int i=21;i<=40;i++){
//         if (i%3==0){
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }

//ques2 sum of all nos which is div by 8 and 7 from 1 to 500
// int main(){
//     int sum=0;
//     for(int i=1;i<=500;i++){
//         if ((i%7!=0) || (i%8!=0)){
//             continue;
//         }else{
//             sum+=i;
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }

//ques 3 diff btw sum of all nos from 1-50 and sum of even nos from 51 to 100
// int main(){
//     int sum1=0;
//     int sum2=0;
//     int diff;
//     for(int i=1;i<=50;i++){
//         sum1+=i;
//         }
    
//     for(int i=51;i<=100;i++){
//         if (i%2==0){
//             sum2+=i;
//         }else{
//             continue;
//         }
//     }
//     diff=sum2-sum1;
//     printf("sum1: %d\n",sum1);
//     printf("sum2: %d\n",sum2);
//     printf("diff: %d",diff);
//     return 0;
// }

//ques 4 avg from 31-40 except 33,36,39
// int main(){
//     int sum=0;
//     float avg;
//     int total=0;
//     for(int i=31;i<=40;i++){
//         if (i==33||i==36||i==39){
//             continue;
//         }else{
//             sum+=i;
//             total+=1;
//         }
//     }
//     printf("sum: %d\n",sum);
//     avg = sum/total;
//     printf("avg: %.2f",avg);
//     return 0;
// }

// ques 5 infinite loop
// int main(){
//     int a;
//     while(1){
//         scanf("%d",&a);
//         if (a==-1){
//             printf("Program ended");
//             break;
//         }
//     }
//     return 0;
// }

// // ques 6 1-100, skip /3 at 75 stop and print 75 as well
//  int main(){
//     for(int i=1;i<=100;i++){
//         if (i==75){
//             printf("%d",75);
//             break;
//         }
//         if (i%3==0){
//             continue;
//         }
        
//         printf("%d\n",i);
//     }
//     return 0;
// }

// ques 7 1-50, prodect of /9,>40 stop:
// int main(){
//     int prod=1;
//     for(int i=1;i<=50;i++){
//         if (i>40){
//             break;
//         }
//         if (i%9==0){
//             prod*=i;
//         }
//     }
//     printf("%d",prod);
//     return 0;
// }

// ques 8 51-100 %3or5 find unit digit add all and print sum:
// int main(){
//     int sum1=0;
//     int unit;
//     for (int i=51;i<=100;i++){
//         if ((i%3==0) || (i%5==0)){
//             unit = i%10;
//             sum1+=unit;
//         }}
//         printf("%d",sum1);
//     return 0;}

// ques 9 print nos btw 732 and 989 wherein 1st and last digits are odd and the middle one is even
// first digit i/100
// last digit i%10
// middle digit (i/10)%10 or (n % 100) / 10 important
// int main(){
//     for(int i=732;i<=989;i++){
//         if ((i%10)%2!=0 && (i/100)%2!=0 && ((i / 10)%10)%2==0){
//             printf("%d\n",i);
//         }}return 0;
// }

// ques 10
#include <stdio.h>
int main(){
int n = 53459;
if ((n%10)%2!=0 && (n/10000)%2!=0 && ((n/100)%10)%2==0){
    printf("valid");
}else{
    printf("invalid");
}}












