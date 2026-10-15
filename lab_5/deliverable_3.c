#include <stdio.h>

#define PI 3.14159265358979323846
#define TOLERANCE 0.000000000001
#define ANGLE_TOLERANCE 0.0000001

int main() {
    double degrees, x;

    printf("Enter angle in degrees: ");
    if (scanf("%lf", &degrees) != 1) {
        return 1;
    }

    double normalized = degrees;
    while (normalized < 0.0) {
        normalized += 360.0;
    }
    while (normalized >= 360.0) {
        normalized -= 360.0;
    }

    double diff90 = normalized - 90.0;
    if (diff90 < 0) diff90 = -diff90;

    double diff270 = normalized - 270.0;
    if (diff270 < 0) diff270 = -diff270;

    if (diff90 <= ANGLE_TOLERANCE || diff270 <= ANGLE_TOLERANCE) {
        printf("tan(%.2f) = infinity\n", degrees);
        return 0;
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

    double tan_val = sin_val / cos_val;
    printf("tan(%.2f) = %.10f\n", degrees, tan_val);

    return 0;
}