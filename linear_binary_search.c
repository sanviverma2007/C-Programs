// linear search
// #include <stdio.h>
// int main(){
//     int n=5;
//     int pos=-1;
//     int value=4;
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<n;i++){
//         if(arr[i]==value){
//             pos = i;
//             break;
//         }
//     }
//     if(pos!=-1){
//     printf("%d is present at index %d",value,pos);
//     }else{
//         printf("Not found");
//     }
// }

// binary search
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int pos=-1;
//     int value = 4;
//     int start = 0;
//     int end = n-1;
//     int mid;
//     while(start<=end){
//     mid = start + (end-start)/2;
//     if(arr[mid]>value){//prefferable to check equality first 
//         end=mid-1;
//     }
//     else if (arr[mid]<value){
//         start=mid+1;
//     }else{
//         pos = mid;
//         break;
//     }}
//     if(pos!=-1){
//         printf("%d is present at index %d",value,pos);
//     }else{
//         printf("Not found");
//     }
// }