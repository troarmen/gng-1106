#include <stdio.h>

int main(){
    int num[9];
    int key, low, high, mid; 
    int pos = -1;

    for(int i = 0; i < 9; i++){
        printf("Add a number: ");
        scanf("%d", &num[i]);
    }

    printf("Enter a search key: ");
    scanf("%d", &key);
    
    low = 0;
    high = 8;

    while(low <= high) {
        mid = (low + high) / 2;

        if(num[mid] == key) {
            pos = mid;
            break;
        }
        else if(key < num[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if(pos != -1) {
        printf("The index of the key in the array is: %d\n", pos);
    }
    else {
        printf("not found\n");
    }

    return 0;
}