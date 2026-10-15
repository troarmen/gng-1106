#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("======FIRST SOLUTION=====\n");
    if (number % 6 == 0) {
        printf("The number is divisible by 6\n");
    } else if (number % 2 == 0) {
        printf("The number is divisible by 2 but not divisible by 3\n");
    } else if (number % 3 == 0) {
        printf("The number is not divisible by 2 but divisible by 3\n");
    } else {
        printf("The number is neither divisible by 2 nor divisible by 3\n");
    }

    printf("======SECOND SOLUTION=====\n");
    switch ((number % 2 == 0) * 2 + (number % 3 == 0)) {
        case 0:
            printf("The number is neither divisible by 2 nor divisible by 3\n");
            break;
        case 1:
            printf("The number is not divisible by 2 but divisible by 3\n");
            break;
        case 2:
            printf("The number is divisible by 2 but not divisible by 3\n");
            break;
        case 3:
            printf("The number is divisible by 6\n");
            break;
    }

    return 0;
}