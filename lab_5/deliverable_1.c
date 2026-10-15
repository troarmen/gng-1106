#include <stdio.h>

#define PI 3.14159265358979323846
#define TOLERANCE 0.000000000001

int main() {
    double degrees, x;
    
    printf("Enter angle in degrees: ");
    if (scanf("%lf", &degrees) != 1) {
        return 1;
    }

    x = degrees * (PI / 180.0);

    double term = 1.0;
    double cos_val = 1.0;
    int n = 1;

    while (term > TOLERANCE || term < -TOLERANCE) {
        term = term * (-1.0 * x * x) / ((2.0 * n) * (2.0 * n - 1.0));
        cos_val += term;
        n++;
    }

    printf("cos(%.2f degrees) = %.10f\n", degrees, cos_val);

    return 0;
}