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