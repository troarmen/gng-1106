#include <stdio.h>

int main(){
    int length, width;

    printf("Please enter the length and width of the rectangle: ");
    scanf("%d %d", &length, &width);

    printf("Ah, the length and width of the rectangle are respectively %d and %d.", length, width);
    return 0;
}