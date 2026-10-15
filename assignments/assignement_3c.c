#include <stdio.h>

int main(void)
{
    int num;

    printf("Type a number between 0 and 100: ");
    scanf("%d", &num);

    printf("Your grade is: ");

    if (num >= 90) {
        printf("A+");
    } else if (num >= 85 && num <= 89) {
        printf("A");
    } else if (num >= 80 && num <= 84) {
        printf("A-");
    } else if (num >= 75 && num <= 79) {
        printf("B+");
    } else if (num >= 70 && num <= 74) {
        printf("B");
    } else if (num >= 65 && num <= 69) {
        printf("C+");
    } else if (num >= 60 && num <= 64) {
        printf("C");
    } else if (num >= 55 && num <= 59) {
        printf("D+");
    } else if (num >= 50 && num <= 54) {
        printf("D");
    } else if (num >= 40 && num <= 49) {
        printf("E");
    } else if (num >= 0 && num <= 39) {
        printf("F");
    }

    printf("\n");

    return 0;
}