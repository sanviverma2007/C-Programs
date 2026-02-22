#include <stdio.h>
int main() {
    long long n, temp1, temp2;
    int digit1, digit2;
    int found = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    temp1 = n;

    while (temp1 > 0) {
        digit1 = temp1 % 10;      // Take last digit
        temp2 = temp1 / 10;       // Remaining number

        while (temp2 > 0) {
            digit2 = temp2 % 10;

            if (digit1 == digit2) {
                printf("First repeated digit: %d\n", digit1);
                found = 1;
                break;
            }

            temp2 = temp2 / 10;
        }

        if (found == 1)
            break;

        temp1 = temp1 / 10;
    }

    if (found == 0)
        printf("No repeated digit found.\n");

    return 0;
}