// // // // SELECTION SORT
// #include <stdio.h>
// int main(){
//     int arr[]= {89,67,17,90,87,15,35,12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for( int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 1. check array elements are already sorted or not
// #include <stdio.h>
// int main(){
//     int arr[]={12,87,90,11,14,17};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int temp=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){asc desc count if both then n not sorted
//                 temp=1;
//             }
                // else if(arr[i]<arr[j]){
//                 temp=1;
//             }
//         }
//     }
//     if (temp==0){
//         printf("Already sorted");
//     }else {
//         printf("Not sorted");
//     }
// }

// 2. find out the sum of array elements except the smallest and largest
// #include <stdio.h>
// int main(){
//     int arr[]= {3,6,7,4,1,9,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     for( int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i=1;i<n-1;i++){
//         sum+=arr[i];
//     }
//     printf("Sum: %d",sum);
// }

// 3. check elements are arranged in ascending or descending order.
// #include <stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     if(arr[0]>arr[n-1]){
//         printf("Descending order");
//     }else{
//         printf("Ascending Order");
//     }
// }

// 4. sort the array elements in odd index
#include <stdio.h>
int main(){
    int arr[]= {89,67,17,90,87,15,35,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    for( int i=1;i<n;i+=2){
        for(int j=i+2;j<n;j+=2){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

//5.  sort even at first then followed by odd
#include <stdio.h>
void sort(int arr[], int n) {
    int even[n], odd[n];
    int e = 0, o = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0){
            even[e] = arr[i];
            e++;}
        else{
            odd[o] = arr[i];
        o++;}}
    
    for(int i = 0; i < e; i++) {
        for(int j = i+1; j < e; j++) {
            if(even[i] > even[j]) {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    for(int i = 0; i < o; i++) {
        for(int j = i+1; j < o; j++) {
            if(odd[i] > odd[j]) {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
        }
       }
    }
    int k = 0;
    for(int i = 0; i < e; i++)
        arr[k++] = even[i];
    for(int i = 0; i < o; i++)
        arr[k++] = odd[i];
}}
int main() {
    int arr[] = {5, 2, 9, 8, 1, 4};
    int n = 6;
    sort(arr, n);
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

// BUBBLE SORT
#include <stdio.h>
int main(){
    int arr[]={23,76,34,99,11,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}