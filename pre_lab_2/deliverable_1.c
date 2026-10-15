#include <stdio.h>

int main(){
    int length, width;

    printf("Please enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Please enter the width of the rectangle: ");
    scanf("%d", &width);

    printf("Ah, the length and width of the rectangle are respectively %d and %d.", length, width);
    return 0;
}