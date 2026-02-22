// // max of 3 nos without if, ternary
// #include <stdio.h>
// int main(){
//     int a,b,c,max1,max;
//     scanf("%d %d %d",&a,&b,&c);
//     max1 = a*(a>b) + b*(b>=a);
//     max = c*(c>max1)+ max1*(max1>c);
//     printf("max is %d",max);
//     return 0;
// }

// // pallendrome checker
// #include <stdio.h>
// int main(){
//     int n,mod, rev=0;
//     scanf("%d",&n);
//         int og = n;
//     while(n>0){
//         mod=n%10;
//         rev=rev*10+mod;
//         n=n/10;
//     }
//     printf("The number is %d and reverse of the number is %d\n",og,rev);
//     if(og==rev){
//         printf("Palendrome");
//     }else{
//         printf("Not a Palendrome");
//     }
//     return 0;
// }

// // armstrong number
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n, mod;
//     int count=0;
//     int sum =0;
//     scanf("%d",&n);
//     int og = n;
//     while(n>0){
//         count++;
//         n=n/10;
//     }
//     n=og;
//     while(n>0){
//         mod = n%10;
//         sum= sum+(int)(pow(mod,count)+0.5);
//         n=n/10;
//     }
//     printf("The number is %d and sum is %d",og,sum);
//     if(og==sum){
//         printf("Armstrong");
//     }else{
//         printf("Not an Armstrong");
//     }
// return 0;
// }
// done