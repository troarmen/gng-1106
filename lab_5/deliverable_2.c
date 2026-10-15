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

    double term_cos = 1.0;
    double cos_val = 1.0;
    int n_cos = 1;

    while (term_cos > TOLERANCE || term_cos < -TOLERANCE) {
        term_cos = term_cos * (-1.0 * x * x) / ((2.0 * n_cos) * (2.0 * n_cos - 1.0));
        cos_val += term_cos;
        n_cos++;
    }

    double term_sin = x;
    double sin_val = x;
    int n_sin = 1;

    while (term_sin > TOLERANCE || term_sin < -TOLERANCE) {
        term_sin = term_sin * (-1.0 * x * x) / ((2.0 * n_sin + 1.0) * (2.0 * n_sin));
        sin_val += term_sin;
        n_sin++;
    }

    if (cos_val > -TOLERANCE && cos_val < TOLERANCE) {
        printf("tan(%.2f degrees) is undefined (cos(x) is 0)\n", degrees);
    } else {
        double tan_val = sin_val / cos_val;
        printf("sin(%.2f degrees) = %.10f\n", degrees, sin_val);
        printf("cos(%.2f degrees) = %.10f\n", degrees, cos_val);
        printf("tan(%.2f degrees) = %.10f\n", degrees, tan_val);
    }

    return 0;
}