#include <stdio.h>

int main() {

    int i, num;
    int smallest;

    for(i = 0; i < 10; i++){
        printf("Type a number: ");
        scanf("%d", &num);

        if(i == 0){
            smallest = num;
        } else{
            if(num < smallest){
                smallest = num;
            }
        }
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}