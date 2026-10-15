#include <stdio.h>

int main() {
    int num;

    printf("Type a number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("This number is even. \n");
        if(num % 4 == 0){
            printf("And is also divisible by 4.\n");
        }
    } else {
        printf("This number is odd. \n");
    }

    return 0;
}