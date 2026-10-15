#include <stdio.h>

int main (){
    int n1, n2, n3;

    printf("Type a number: ");
    scanf("%d", &n1);
    printf("Type a number: ");
    scanf("%d", &n2);
    printf("Type a number: ");
    scanf("%d", &n3);

    if(n1 < 0 | n2 < 0 | n3 < 0){
        printf("wrong input\n");
    } else{
        if(n1 + n2 > n3){
            printf("The numbers you typed can form a triangle.\n");
        } else if(n1 + n3 > n2){
            printf("The numbers you typed can form a triangle.\n");
        } else if(n2 + n3 > n1){
            printf("The numbers you typed can form a triangle.\n");
        }
    }
    
    return 0;
}