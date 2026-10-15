#include <stdio.h>

int main() {
    int i, current, prev = 0;
    int count_11 = 0;

    printf("Enter 10 integers (0 or 1):\n");

    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &current);

        if (i > 1 && current == 1 && prev == 1) {
            count_11++;
        }

        prev = current;
    }

    printf("\nThe number of times '1' was entered immediately after another '1': %d\n", count_11);

    return 0;
}