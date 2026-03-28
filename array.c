//1. sum of array elements
// #include <stdio.h>
// int main(){
//     int arr[]={10,20,30,40,50}; //data_type arr_name[]={elements}
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     for (int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     printf("sum: %d",sum);
// }  


// questions
// 1. find sum of all elements from array
// 2. product of even elements
// 3. print list of sum of digits of element of array
// 4. sum of prime elements
// 5. list of names starting with vowels
// 6. list of names having even count
// 7. product of both dig of a prime element of array


// 1.
// #include <stdio.h>
// int main(){
//     int sum =0;
//     int arr[5]={10,20,30,40,50};
//     int n= (sizeof(arr)/sizeof(arr[0]));
//     for (int i =0; i<n; i++){
//         sum+=arr[i];
//     }
//     printf("%d",sum);
//     return 0;
// }


// 2.
// #include <stdio.h>
// int main(){
//     int prod =1;
//     int arr[5]={1,2,3,4,5};
//     int n= (sizeof(arr)/sizeof(arr[0]));
//     for (int i =0; i<n; i++){
//         if(arr[i]%2==0)
//         prod*=arr[i];
//     }
//     printf("product of even digits:  %d",prod);
//     return 0;
// }


// 3. print list of sum of digits of element of array
// #include <stdio.h>
// int main(){
//     int arr[5] = {11,22,33,44,55};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int sum_arr[5];
//     for (int i=0;i<n;i++){
//         int sum=0;
//         while(arr[i]>0){
//         int rem = arr[i]%10;
//         sum+=rem;
//         arr[i]=arr[i]/10;
        
//     }sum_arr[i]=sum;
//     }
//     for (int i=0;i<n;i++){
//         printf("%d\n",sum_arr[i]);
//     }
// }


/// 4. sum of prime elements
// #include <stdio.h>
// int prime(int n){
//     int temp=1; 
//     for (int i=2;i<n;i++){
//         if (n%i==0){
//             temp = 0;
//             break;
//         }
//     }
//     return temp;
// }
// int main(){
//     int arr[6]={111,13,7,9};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     for(int i=0;i<n;i++){
//         if (prime(arr[i])){
//             sum+=arr[i];
//         }
//     }
//     printf("sum of prime elements: %d",sum);
// }


// 5. names with vowels
// #include <stdio.h>
// int main(){
//     char names[4][20]={"Avneet","Sanvi","Ojal","Ella"};
//     int n = sizeof(names)/sizeof(names[0]);
//     for (int i=0; i<n;i++){
//         if(names[i][0]=='A' || names[i][0]=='E' || names[i][0]=='I' || names[i][0]=='O' || names[i][0]=='U'){
//             printf("%s\n",names[i]);
//         }
//     }
// }


// 6. even count names
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char names[4][20]={"Avneet","Sanvi","Chandrika","Suhavi"};
//     int n= sizeof(names)/sizeof(names[0]);
//     for (int i=0;i<n;i++){
//         if(strlen(names[i])%2==0){
//             printf("%s\n",names[i]);
//         }
//     }
// }


// 7. product of both dig of a prime element of array
// #include <stdio.h>
// int prime(int n){
//     int temp=1; 
//     for (int i=2;i<n;i++){
//         if (n%i==0){
//             temp = 0;
//             break;
//         }
//     }
//     return temp;
// }
// void prod(int n){
//     int prod=1;
//         while(n>0){
//         int rem = n%10;
//         prod*=rem;
//         n=n/10;
// }
//  printf("%d\n",prod);}

// int main(){
//     int num[5]={29,11,34,88,7};
//     int n= sizeof(num)/sizeof(num[0]);
//     for (int i=0; i<n; i++){
//         if (prime(num[i])){
//             prod(num[i]);
//         }}
// }

// questions
// 1.count list of names start with vowel and end with vowel
// 2. find largest string from array
// 3. find smallest string from array


// #include <stdio.h>
// #include <string.h>
// int isVowel(char ch){
//     // ch = tolower(ch);
//     if (ch=='a'||ch=='e'|| ch=='o'||ch=='i'||ch=='u'){
//         return 1;
//     }
//     else return 0;
// }
// int main(){
//     char names[5][20] = {"doraemon","shinchan","anime","eve","adam"};
//     int count =0;
//     int n = sizeof(names)/sizeof(names[0]);
//     for (int i=0;i<n;i++){
//         if (isVowel(names[i][0]) && isVowel(names[i][strlen(names[i])-1])){
//             count+=1;
//         }
//     }
//     printf("number of elements beginning and ending with vowel is %d",count);
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char names[5][20] = {"Ram", "Shyamaaaa", "Alexander", "Amit", "Ravi"};
//     int maxLen = 0;
//     int j;
//     int n= sizeof(names)/sizeof(names[0]);
//     for(int i = 0; i < n; i++) {
//         int len = strlen(names[i]);
//         if(len > maxLen) {
//             maxLen = len;
//             j=i;
//     }}
//     printf(names[j]);
//     printf("\nNumber of letters in longest name = %d\n", maxLen);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int main() {
//     char names[5][20] = {"Ram", "Shyam", "Alexander", "Amit", "Ravi"};
//     int j=0;
//     int minLen = strlen(names[0]);
//     int n= sizeof(names)/sizeof(names[0]);
//     for(int i = 0; i < n; i++) {
//         int len = strlen(names[i]);
//         if(len < minLen) {
//             minLen = len;
//             j=i;
//         }
//     }
//     printf(names[j]);
//     printf("\nNumber of letters in shortest name = %d\n", minLen);
// }


// 4. print list of elements from array having more than 3 vowels count
// #include <stdio.h>
// #include <string.h>
// int isVowel(char ch){
//     if( ch == 'a' || ch =='e' || ch == 'i' || ch =='o' || ch=='u'){
//         return 1;
//     }else return 0;
// }
// int main(){
//     char arr[3][20] = {"aaclee","banana","ourage"};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for (int i=0;i<n;i++){
//         int count =0;
//         for (int j=0;j<strlen(arr[i]);j++){
//             if (isVowel(arr[i][j])){
//                 count+=1;
//             }
//         }
//         if (count>3){
//             printf("%s\n",arr[i]);
//         }
// }}

// 5. print list of string elements having odd count
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char names[4][20]={"Suhavi","Sanvi","Avneet","Shagun"};
//     int n = sizeof(names)/sizeof(names[0]);
//     for (int i=0;i<n;i++){
//         int count =0;
//         for (int j=0;j<strlen(names[i]);j++){
//             count+=1;
//         }
//         if (count%2!=0){
//             printf("%s\n",names[i]);
//         }
//     }
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
    // char arr1[5] = {'8','7','5','2','9'};//1d array
//  print digit version of it
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);
//     int sum1=0;
//     for(int i=0;i<n1;i++){
//         int num = (int)arr1[i];
//         sum1+= (num-48);
//     }
//     printf("sum of elements of arr 1: %d ",sum1);

//    char arr2[5][10] = {"67","78","24","53","11"};//2d array
// //    print sum of digits of an element
//     int n2 = sizeof(arr2)/sizeof(arr2[0]);
//     for (int i=0;i<n2;i++){
//          int len = strlen(arr2[i]);
//          int sum2=0;
//         for (int j=0;j<len;j++){//can be done without 2nd for loop as the arr has only 2 digit nos, declare 2 variables corresponding to the first and second digit and add them
//             int dig=(int)arr2[i][j];
//             sum2+=(dig-48);
//         }
//         printf("%d ",sum2);
//     }

// passing array ti fxn
// #include <stdio.h>
// void printArr(int arr[10],int n){
//     for (int i=0;i<n;i++){
//         printf("%d ", arr[i]);
//     }
// }
// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     printArr(arr,n);
// }


// #include <stdio.h>
// #include <string.h>
// // 1. even
// void evenDig(char arr[][10],int n){
//     for(int i=0;i<n;i++){
//         int len = strlen(arr[i]);
//         for(int j=0;j<len;j++){
//             int dig= (int) arr[i][j];
//             int digit = dig-48;
//             if (digit%2==0){
//                 printf("%d ",digit);
//             }
//         }printf("\n");
//     }
// }
// // 2. odd
// void oddDig(char arr[][10],int n){
//     for(int i=0;i<n;i++){
//         int len = strlen(arr[i]);
//         for(int j=0;j<len;j++){
//             int dig= (int) arr[i][j];
//             int digit = dig-48;
//             if (digit%2!=0){
//                 printf("%d ",digit);
//             }
//         }printf("\n");
//     }
// }
// void oddEven(char arr[][10],int n){
//     for (int i=0;i<n;i++){
//         int len =strlen(arr[i]);
//         int ld = arr[i][3];
//         if(ld%2==0){
//             printf("Even\n");
//         }else{
//             printf("Odd\n");
//         }

//     }

// } 
// int main(){
//     char arr[5][10] = {"6789","1234","2468","1357","5678"};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     // evenDig(arr,n);
//     // oddDig(arr,n);
//     oddEven(arr,n);
// }