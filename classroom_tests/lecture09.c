#include <stdio.h>

int max(int a, int b){
    if(a > b){
        return a;
    } else if (b > a){
        return b;
    }
}

int main(){
    int num1, num2;

    printf("Type the first: ");
    scanf("%d", &num1);

    printf("Type the second: ");
    scanf("%d", &num2);

    printf("The biggest between them is %d", max(num1, num2));

    return 0;
}
