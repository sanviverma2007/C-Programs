// 1. reverse an array (with another array)
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int rev[6];
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for (int i=0;i<n;i++){
//         rev[i]=arr[n-i-1];
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",rev[i]);
//     }
// }

// 2. reverse an array (without another array)
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for (int i=0;i<n/2;i++){
//         int temp = arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 3. {1,2,3,4,5,6} to {3,2,1,4,5,6}
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for (int i=0;i<n/3;i++){
//         int temp = arr[i];
//         arr[i]=arr[n-i-4];
//         arr[n-i-4]=temp;
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 4. second largest element
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int largest = arr[0];
//     int second = -1;
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for (int i=1; i<n;i++){
//         if (arr[i]>largest){
//             second = largest;
//             largest = arr[i];
//         }else if (arr[i]>second && arr[i]<largest){
//             second = arr[i];
//         }
//     }
//     printf("%d",second);
// }

// 5. second smallest element
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int smallest = arr[0];
//     int second = 9999;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for (int i=1;i<n;i++){
//         if (arr[i]<smallest){
//             second = smallest;
//             smallest = arr[i]; 
//         }else if (arr[i]!=smallest && arr[i]<second){
//             second = arr[i];
//         }
//     }
//     printf("%d ",second);
// }

// 6. ascending order (BUBBLE SORT)
// #include <stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int temp;
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]<arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]= temp;
//             }
//         }
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 7. descending order (BUBBLE SORT)
// #include <stdio.h>
// int main(){
//     int arr[5], temp;
//     for (int i=0;i<5;i++){
//         scanf("%d",&arr[i]);//do not put space after %d, it would wait for one more integer
//     }
//     for(int i=0;i<4;i++){
//         for (int j=0;j<4-i;j++){
//             if(arr[j]<arr[j+1]){
//                 temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for (int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }













































