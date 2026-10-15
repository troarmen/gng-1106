#include <stdio.h>

int main() {
    int N;

    printf("Enter a positive integer greater than 1: ");
    scanf("%d", &N);

    // Outer loop controls the number of characters in each row (from N down to 1)
    for (int i = N; i >= 1; i--) {
        // Inner loop prints 'o' i times
        for (int j = 0; j < i; j++) {
            printf("o");
        }
        printf("\n");
    }

    return 0;
}