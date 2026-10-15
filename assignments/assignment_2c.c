#include <stdio.h>

int main(){
    int n1, n2, n3;
    int biggest;

    printf("Please enter the first number: ");
    scanf("%d", &n1);
    printf("Please enter the second number: ");
    scanf("%d", &n2);
    printf("Please enter the third number: ");
    scanf("%d", &n3);

    if(n1 == n2 | n1 == n3 | n2 == n3){
        printf("wrong input\n");
    } else{
        if(n1 > n2 && n1 > n3){
            biggest = n1;
        } else if (n2 > n1 && n2 > n3){
            biggest = n2;
        } else if (n3 > n1 && n3 > n2){
            biggest = n3;
        }
        printf("The biggest number typed was %d\n", biggest);
    }
    return 0;

}