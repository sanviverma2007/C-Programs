#include <stdio.h>

int main() {
    long long n, temp;
    int digits[20];
    int freq[10] = {0};
    int i = 0, found = 0;

    scanf("%lld", &n);
    temp = n;

    // Store digits in array (reverse order)
    while (temp > 0) {
        digits[i] = temp % 10;
        temp = temp / 10;
        i++;
    }

    // Traverse from left to right using while
    i = i - 1;   // move to last stored digit

    while (i >= 0) {
        if (freq[digits[i]] == 1) {
            printf("First repeated digit: %d\n", digits[i]);
            found = 1;
            break;
        }
        freq[digits[i]]++;
        i--;
    }

    if (!found) {
        printf("No repeated digits found.\n");
    }

    return 0;
}
