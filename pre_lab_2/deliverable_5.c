#include <stdio.h>

int main(){
    double length, width;
    double area;

    printf("Please enter the length and width of the rectangle: ");
    scanf("%lf %lf", &length, &width);

    area = length * width;
    printf("Ah, the length and width of the rectangle are respectively %lf and %lf.\n", length, width);
    printf("The area of the rectangle is: %lf\n", area);
    return 0;
}