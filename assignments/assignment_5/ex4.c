#include <stdio.h>
void fibonacci(int num){
    int t1 = 1;
    int t2 = 1;
    int next;

    printf("%d, %d, ", t1, t2);

    for(int i = 2; i <= num; i++){
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        printf("%d, ", next);

    }
}

int main(){
    int num = 2;

    while(num >= 2){
        printf("\nType a number to see the Fibonacci sequence: ");
        scanf("%d", &num);

        if(num < 2){
            printf("\nThe number has to be bigger than 2.");
            break;
        }

        fibonacci(num);
    }
    return 0;
}