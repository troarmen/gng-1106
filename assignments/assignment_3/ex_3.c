#include <stdio.h>

int main() {
    int i, num;
    int even_count = 0;

    printf("Enter 10 positive integers:\n");

    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_count++;
        }
    }

    printf("\nThe number of even numbers is: %d\n", even_count);

    return 0;
}