// octal number
#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, i = 0, remainder;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal != 0) {
        remainder = octal % 10;          // Get last digit
        decimal += remainder * pow(8, i); // Multiply with 8^position
        octal = octal / 10;              // Remove last digit
        i++;
    }

    printf("Equivalent decimal number = %d", decimal);

    return 0;
}

// // goto statement
// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num % 2 == 0)
//         goto EVEN;
//     else
//         goto ODD;

// EVEN:
//     printf("The number is Even.");
//     goto END;

// ODD:
//     printf("The number is Odd.");

// END:
//     return 0;
// }



// You are using GCC
// #include <stdio.h>
// int main(){
//     int n, i=1;
//     scanf("%d",&n);
//     while(i<=n){
//         if (i%3==0 && i%5==0){
//             i++;
//             continue;
//         }
//         if(i%4==0){
//             printf("Critical Issue\n");
//             i++;
//             continue;
//         }
//         if(i%7==0){
//             printf("Routine Maintenance\n");
//             i++;
//             continue;
//         }
//         printf("Safe Event\n");
//         i++;
//     }
//     return 0;
// }
