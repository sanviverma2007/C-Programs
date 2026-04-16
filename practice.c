//1. transpose
// #include <stdio.h>
// int main(){
//     int matrix[2][3]={{1,2,3},{4,5,6}};
//     int m =2;
//     int n =3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d",matrix[j][i]);
//         }
//         printf("\n");
//     }
// }

// 2.index of last occurrence of max value
// #include <stdio.h>
// int main(){
//     int arr[5]={3,15,7,15,4};
//     int index=0,max=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]>=max){ // important to remember equal to for last occurence
//             max=arr[i];
//             index=i;
//         }
//     }
//     printf("%d",index);
// }

//3. less than 35 remove
// #include <stdio.h>
// int main(){
//     int arr[]={10,7,36,35,77,99,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         if(arr[i]<35){
//             for(int j=i;j<n;j++)
//             arr[j]=arr[j+1];
//             n--;
//             i--;//very important to do i-- otherwise adjacent elements which satisfy condition wont be removed
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 4.swap 2 rows
// #include <stdio.h>
// int main(){
//     int matrix[3][2]={{1,2},{3,4},{5,6}};
//     int r1=0;
//     int r2=2;
//         for(int i=0;i<2;i++){
//             int temp=matrix[r1][i];
//             matrix[r1][i]=matrix[r2][i];
//             matrix[r2][i]=temp;
//         }
//         for(int i=0;i<3;i++){
//             for(int j=0;j<2;j++){
//                 printf("%d ",matrix[i][j]);
//             }
//             printf("\n");
//         }
//     }

//5. sort with sum
// #include <stdio.h>
// int sum(int n){
//     int sum=0;
//     while(n>0){
//         int dig = n%10;
//         sum+=dig;
//         n/=10;
//     }
//     return sum;
// }
// int main(){
//     int arr[5]={14,65,77,10,55};
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5-i-1;j++){// j is zero
//             if(sum(arr[j])>sum(arr[j+1])){
//             int temp = arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }}
//     }
//     for(int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }

// 6.sort elements of particular column using bubble sort
// #include <stdio.h>
// int main(){
//     int arr[3][2]={{11,2},{12,1},{9,8}};
//     int col =0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3-i-1;j++){
//             if(arr[j][col]>arr[j+1][col]){
//                 int temp=arr[j][col];
//                 arr[j][col]=arr[j+1][col];
//                 arr[j+1][col]=temp;
//     }}}
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// 7. 
// #include <stdio.h>
// int digcount(int n,int val){
//     int sum=0;
//     while(n>0){
//         int dig = n%10;
//         if(dig==val){
//             sum+=1;
//         }
//         n/=10;
//     }
//     return sum;
// }
// int main(){
//     int arr[5]={11,102,10,14,15};
//     int val=1;
//     int count =0;
//     for(int i=0;i<5;i++){
//         count+=digcount(arr[i],1);
//     }
//     printf("%d ",count);
// }

// 8. even odd
#include <stdio.h>
void sort(int arr[],int n){
    int even[n];
    int odd[n];
    int e=0,o=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[e]=arr[i];
            e++;
        }
        else{
            odd[o]=arr[i];
            o++;
        }
    }

    for(int i=0;i<e;i++){
        for(int j=0;j<e-1-i;j++){
            if(even[j]>even[j+1]){
                int temp= even[j];
                even[j]=even[j+1];
                even[j+1]=temp;
            }
        }
    }
    for(int i=0;i<o;i++){
        for(int j=0;j<o-1-i;j++){
            if(odd[j]>odd[j+1]){
                int temp= odd[j];
                odd[j]=odd[j+1];
                odd[j+1]=temp;
            }
        }
    }
    int k=0;
    for(int i=0;i<e;i++){
        arr[k++]=even[i];
    }
    for(int j=0;j<o;j++){
        arr[k++]=odd[j];
    }
}
int main(){
    int arr[]={14,67,11,1,9,10,54,88};
    int n= 8;
    sort(arr,8);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

