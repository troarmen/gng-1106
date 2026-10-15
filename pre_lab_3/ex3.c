#include <stdio.h>

int main(){
    int n1, n2;

    printf("Type a number: ");
    scanf("%d", &n1);
    printf("Type another number: ");
    scanf("%d", &n2);

    if(n1 == n2){
        printf("wrong input\n");
    } else if (n1 < n2){
        printf("The smallest between them is %d\n", n1);
    } else if (n2 < n1){
        printf("The smallest between them is %d\n", n2);
    }
    return 0;

}