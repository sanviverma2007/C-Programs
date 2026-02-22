#include <stdio.h>
// MINI CALCULATOR
// int main(){
//     char c;
//     int a,b;
//     printf("Enter char:");
//     scanf("%c",&c);
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
//     scanf("%d",&b);

//     switch(c){
//         case '+':
//         printf("Addition\n");
//         printf("%d+%d=%d",a,b,a+b);
//         break;
//         case '-':
//         printf("Subtraction\n");
//         printf("%d-%d=%d",a,b,a-b);
//         break;
//         case '*':
//         printf("Multiplication\n");
//         printf("%d*%d=%d",a,b,a*b);
//         break;
//         case '/':
//         printf("Division\n");
//         printf("%d/%d=%d",a,b,a/b);
//         break;
//         default:
//         printf("Put valid Symbol\n");
//         break;
//     }
    
// }
// for area
int main(){
    int a;
    int r,l,b,s,base,height;
    printf("Enter value btw 1-4");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("Radius: ");
        scanf("%d",&r);
        printf("Area of circle = %.2f",3.14*r*r);
        break;
        case 2:
        printf("Length: ");
        scanf("%d",&l);
        printf("Breadth: ");
        scanf("%d",&b);
        printf("Area of rectangle:%d",l*b);
        break;
        case 3:
        printf("Side");
        scanf("%d",&s);
        printf("Area of square: %d",s*s);
        break;
        case 4:
        printf("Base: ");
        scanf("%d",&base);
        printf("Height: ");
        scanf("%d",&height);
        printf("Area of triangle = %.2f",0.5*base*height);
        break;
        default:
        printf("Invalid Input");
        break;
    }
    return 0;
}