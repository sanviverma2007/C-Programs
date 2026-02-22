// print numbers from 1 to 10
// #include <stdio.h>
// int main(){
//     int a =1;
//     fxn:
//     printf("%d\n",a);
//     a++;
//     if(a<=10){
//         goto fxn;
//     }
//     return 0;
// }

// // print the numbers in reverse order 10 to 1
#include <stdio.h>
int main(){
    int a =10;
    fxn:
    printf("%d\n",a);
    a--;
    if(a>0){
        goto fxn;
    }
    return 0;
}

// // print your name letter be letter
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int i=0;
//     char name[] = "Sanvi";
//     fxn:
//     printf("%c\n",name[i]);
//     i++;
//     if(i<strlen(name)){
//         goto fxn;
//     }
//     return 0;
// }

// // print the table of user input
// #include <stdio.h>
// int main(){
//     int a;
//     int b=1;
//     scanf("%d",&a);
//     fxn:
//     printf("%d x %d = %d\n",a,b,a*b);
//     b++;
//     if(b<=10){
//         goto fxn;
//     }
//     return 0;
// }