// insertion of elements into an array

// in between
// #include <stdio.h>
// int main(){
//     int arr[100]= {1,2,3,4,5};
//     int n=5;
//     int pos = 3;
//     int value = 16;
//     for(int i=n;i>pos;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=value;
//     for(int i=0;i<n+1;i++){
//         printf("%d ",arr[i]);
//     }
// }

// at start
// #include <stdio.h>
// int main(){
//     int arr[100]= {1,2,3,4,5};
//     int n=5;
//     for(int i=n;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=0;
//     for(int i=0;i<n+1;i++){
//         printf("%d ",arr[i]);
//     }
// }

// at end
// #include <stdio.h>
// int main(){
//     int arr[100]= {1,2,3,4,5};
//     int n=5;
//     arr[5]=6;
//     n++;
//      for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// deletion by position
// #include <stdio.h>
// int main() {
//     int arr[100] = {10, 20, 30, 40, 50};
//     int n = 5;
//     int pos = 2;
//     for(int i = pos; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     n--;
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// deletion by value
// #include <stdio.h>
// int main(){
//     int arr[100]={1,2,3,4,5};
//     int n=5;
//     int pos=-1;
//     int value =3;
//     for(int i = 0; i < n; i++) {
//     if(arr[i] == value) {
//         pos = i;
//         break;
//     }
// }for(int i = pos; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     for(int i = 0; i < n-1; i++) {
//         printf("%d ", arr[i]);
//     }
// }

// delete all occurrences
// #include <stdio.h>
// int main(){
// int arr[100]={1,2,3,4,3,5};
//     int n=6;
//     int value =3;
//     for(int i = 0; i < n; i++) {
//     if(arr[i] == value) {
//         for(int j = i; j < n - 1; j++) {
//             arr[j] = arr[j + 1];
//         }
//         n--;
//         i--; }}// VERY IMPORTANT
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
// }}

// practice questions gpt
// 1. insert 99 at start [10, 20, 30, 40]
//  #include <stdio.h>
// int main(){
// int arr[100]={10,20,30,40};
//     int n=4;
//     for(int i=n;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=99;
//     n++;
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
// }}

// 2. insert 55 at end [5, 10, 15];
// #include <stdio.h>
// int main(){
// int arr[100]={5,10,15};
//     int n=3;
//     arr[n]=55;
//     n++;
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
// }}

// 3. delete first element [7, 8, 9, 10]
// #include <stdio.h>
// int main(){
//     int arr[7]={7,8,9,10};
//     int n=4;
//     int pos =0;
//     for(int i=pos;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
// }
// }

// 4. delete last element
// #include <stdio.h>
// int main(){
//     int arr[7]={7,8,9,10};
//     int n=4;
//     n--;
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
// }
// }

// 5.Insert 25 at index 2
// #include <stdio.h>
// int main(){
//     int arr[10]={10,20,30,40,50};
//     int n=5;
//     int pos = 2;
//     int value = 25;
//     for(int i=n;i>pos;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=value;
//     n++;
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 6. Delete element at index 3[5, 10, 15, 20, 25]
// #include <stdio.h>
// int main(){
//     int arr[10]={5, 10, 15, 20, 25};
//     int n=5;
//     int pos = 3;
//     for(int i=pos;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 7. Delete first occurrence of 3
// #include <stdio.h>
// int main(){
//     int arr[10]={5,3,5,6,3};
//     int n=5;
//     int pos = -1;
//     int value = 3;
//     for(int i=0;i<n;i++){
//         if(arr[i]==value){
//             pos=i;
//             break;
//         }
//     }
//     for(int i=pos;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// // 8. delete all occurrences of 3
// #include <stdio.h>
// int main(){
//     int arr[10]={5,3,5,6,3};
//     int n=5;
//     int pos = -1;
//     int value = 3;
//     for(int i=0;i<n;i++){
//         if(arr[i]==value){
//         for(int j=i;j<n-1;j++){
//         arr[j]=arr[j+1];
//     }
//     n--;
//     i--;
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 9. multi insertion 
// #include <stdio.h>
// int main() {
//     int arr[20] = {1,2,3,4,5};
//     int n = 5;
//     int pos = 2;
//     int newArr[] = {10,20,30};
//     int k = 3;
//     for(int i=n-1;i>pos;i--){
//         arr[i+k]=arr[i];
//     }
//     n+=k;
//     for(int i=0;i<k;i++){
//         arr[i+k]=newArr[i];
//     }
//         for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 10. insert into sorted array
// #include <stdio.h>
// int main(){
//     int arr[10]= {10,20,30,40,50};
//     int n=5;
//     int pos;
//     int value =35;
//     for(pos=0;pos<n;pos++){
//         if(arr[pos]>value){
//             break;
//         }
//     }
//     for(int i=n;i>pos;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=value;
//     n++;
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// // 11. delete from sorted array
// #include <stdio.h>
// int main(){
//     int arr[10]={10,20,90,40,50};
//     int n=5;
//     int value = 30;
//     int pos;
//     for(pos=0;pos<n;pos++){//remember not to initialize
//         if(arr[pos]==value){
//             break;
//         }
//     }
//     if(pos<n){//done if the value is not in the array;
//     for(int i=pos;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     }
//     else{printf("No element");}
    
// }

//12. find union of 2 arrays
// #include <stdio.h>
// void findUnion(int arr1[], int n1, int arr2[], int n2) {
//     int i = 0, j = 0;
//     int lastPrinted = -1; // to avoid duplicates

//     while (i < n1 && j < n2) {
//         if (arr1[i] < arr2[j]) {
//             if (arr1[i] != lastPrinted) {
//                 printf("%d ", arr1[i]);
//                 lastPrinted = arr1[i];
//             }
//             i++;
//         }
//         else if (arr2[j] < arr1[i]) {
//             if (arr2[j] != lastPrinted) {
//                 printf("%d ", arr2[j]);
//                 lastPrinted = arr2[j];
//             }
//             j++;
//         }
//         else {
//             if (arr1[i] != lastPrinted) {
//                 printf("%d ", arr1[i]);
//                 lastPrinted = arr1[i];
//             }
//             i++;//imp to update both
//             j++;
//         }
//     }

//     // Remaining elements for the array left 
//     while (i < n1) {
//         if (arr1[i] != lastPrinted) {
//             printf("%d ", arr1[i]);
//             lastPrinted = arr1[i];
//         }
//         i++;
//     }

//     while (j < n2) {
//         if (arr2[j] != lastPrinted) {
//             printf("%d ", arr2[j]);
//             lastPrinted = arr2[j];
//         }
//         j++;
//     }
// }

// int main() {
//     int n1, n2;

//     scanf("%d", &n1);
//     int arr1[n1];
//     for (int i = 0; i < n1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     scanf("%d", &n2);
//     int arr2[n2];
//     for (int i = 0; i < n2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     findUnion(arr1, n1, arr2, n2);

//     return 0;
// }


// resume from 13 of gpt

















