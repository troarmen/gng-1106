#include <stdio.h>

#define PI 3.14159265358979323846

int main() {
    double deg, x;

    printf("Enter angle in degrees: ");
    scanf("%lf", &deg);

    // Convert degrees to radians
    x = deg * (PI / 180.0);

    // First term (n = 0) is 1.0
    double term = 1.0;
    double cos_val = term;

    // Add the next 999 terms to reach 1000 terms in total
    for (int n = 1; n < 1000; n++) {
        term = -term * (x * x) / ((2 * n - 1) * (2 * n));
        cos_val += term;
    }

    printf("cos(%.2f) = %.6f\n", deg, cos_val);

    return 0;
}