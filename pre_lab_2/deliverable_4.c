#include <stdio.h>

int main(){
    double length, width;

    printf("Please enter the length and width of the rectangle: ");
    scanf("%lf %lf", &length, &width);

    printf("Ah, the length and width of the rectangle are respectively %lf and %lf.", length, width);
    return 0;
}