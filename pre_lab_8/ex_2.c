#include <stdio.h>

int findMax(int *array, int arrayLength){
    int largest;
    for (int c = 0; c < arrayLength; c++){
        if(c == 0){
            largest = array[c]; 
        } else if (array[c] > largest) {
            largest = array[c];
        }
    }

    return largest;
}

int main(){
    int a[10] = {2, 4, 6, 3, 43, 65, 23, 54, 32, 53};
    printf("The largest number is: %d", findMax(a, 10));
    return 0;
}