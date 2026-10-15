#include <stdio.h>

int main(){
    float length, width;

    printf("Please enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);

    printf("Ah, the length and width of the rectangle are respectively %f and %f.", length, width);
    return 0;
}