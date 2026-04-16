// 1. fxn prototypes,definition
// #include <stdio.h>
// void sum(int a,int b){
//     printf("sum: %d",a+b);
// }
// int main(){
//     sum(10,20);//passing values
// }

// 2. fxn passing arguments by reference
// #include <stdio.h>
// void prnum(int *a){
//     *a = 10;
// }
// int main(){
//     int a =30;
//     prnum(&a);
//     printf("%d",a);
// }

// 3. math library
// #include <stdio.h>
// #include <math.h>
// int main(){
//     printf("%.f\n",ceil(4.2));
//     printf("%.f\n",floor(4.2));
//     printf("%.f\n",round(4.4));
//     printf("%.f\n",pow(2,3));
//     printf("%.f",sqrt(4));
// }

// 4. scope rules
// #include <stdio.h>
// int a=10;
// int main(){
//     int a =20;
//     printf("%d",a);
// }

// 5. auto
// #include <stdio.h>
// int main(){
//     auto int a=10;
//     printf("%d",a);
// }

// 6. extern
// #include <stdio.h>
// extern int a;
// int main(){
//     printf("%d",a);
// }


// 7. register
// #include <stdio.h>

// int main() {
//     register int i;
//     for(i = 0; i < 5; i++) {
//         printf("%d ", i);
//     }
//     return 0;
// }

// 8.static🫶🏻
#include <stdio.h>

void func() {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main() {
     func();
    func();
    func();
}