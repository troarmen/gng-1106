#include <stdio.h>

int getUserInput(); 
void printPrimeFactors(int x);

int main(){
    int x;
    x = getUserInput();
    printPrimeFactors(x);
    return 0;
}

int getUserInput(){
    int num = 0;

    while(num <= 1){
        printf("Type a number: ");
        scanf("%d", &num);
    }

    return num;
}

void printPrimeFactors(int x){
    int i;

    for(int i = 2; i <= x; i++){
        while(x % i == 0){
            printf("%d ", i);
            x /= i;
        }
    }
    printf("\n");
}