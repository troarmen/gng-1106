#include <stdio.h>

int main() {
    int num;
    int digits[5];

    printf("Enter a five digit integer number: ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    int temp = num;

    for (int i = 4; i >= 0; i--) {
        digits[i] = temp % 10;
        temp /= 10;
    }

    if (digits[0] == digits[4] && digits[1] == digits[3]) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
