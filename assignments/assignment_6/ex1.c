#include <stdio.h>
#include <math.h>

int main() {
    int count = 0;

    for (int a = 1; a < 1000; a++) {
        for (int b = a + 1; b < 1000; b++) {
            int c2 = a * a + b * b;
            int c = (int)(sqrt(c2) + 0.5);

            if (c >= 1000) {
                break; 
            }

            if (c * c == c2) {
                printf("%d %d %d\n", a, b, c);
                count++;
            }
        }
    }

    printf("Total number of Pythagorean triples: %d\n", count);

    return 0;
}