#include <stdio.h>

void moving_average(double num1, double num2, double num3) {
    double average = (num1 + num2 + num3) / 3.0;

    printf("\n======================\n");
    printf("num1: %.2f\n", num1);
    printf("num2: %.2f\n", num2);
    printf("num3: %.2f\n", num3);
    printf("Average: %.2f\n", average);
    printf("======================\n");
}

int main() {
    double num1, num2, num3;

    printf("Type a number: ");
    scanf("%lf", &num1);
    printf("Type a number: ");
    scanf("%lf", &num2);

    for (int i = 2; i < 10; i++) {
        printf("Type a number: ");
        scanf("%lf", &num3);

        moving_average(num1, num2, num3);

        num1 = num2;
        num2 = num3;
    }

    return 0;
}