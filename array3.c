// 3d array
// #include <stdio.h>
// int main(){
//     int arr[3][2][2]={{{1,2},{3,4}},
//                         {{5,6},{6,7}},
//                             {{7,8},{8,9}}};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         int x = sizeof(arr[0])/sizeof(arr[0][0]);//imp
//         for(int j=0;j<x;j++){
//             int y= sizeof(arr[0][0])/sizeof(arr[0][0][0]);
        
//         for(int k=0;k<y;k++){
//             printf("%d",arr[i][j][k]);
//         }
//         printf("\n");
//         }
//     printf("\n");}
// }

// 2d array
// 1. right diagonal
// #include <stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sum=0;
//     for(int i=0;i<n;i++){
//         int x = sizeof(arr[0])/sizeof(arr[0][0]);
//         for(int j=0;j<x;j++){
//             if(i==j){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     printf("sum of right diagonal elements: %d",sum);
// }

// 2. left diagonal
#include <stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        int x = sizeof(arr[0])/sizeof(arr[0][0]);
        for(int j=0;j<x;j++){
            if(i+j==2){
                sum+=arr[i][j];
            }
        }
    }
    printf("sum of left diagonal elements: %d",sum);
}

// 3. sum of individual rows
// #include <stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         int x = sizeof(arr[0])/sizeof(arr[0][0]);
//         int sum=0;
//         for(int j=0;j<x;j++){
//                 sum+=arr[i][j];
//             }
        
//         printf("sum of elements of row%d is %d\n",i,sum);}
//     }
    


