#include <stdio.h>

int main() {
    int atual, anterior;
    int contador = 0;

    for (int i = 0; i < 15; i++) {
        printf("Type the %dº number: ", i + 1);
        scanf("%d", &atual);

        if (i > 0) {
            if (anterior % 2 == 0 && atual % 2 != 0) {
                contador++;
            }
        }
        anterior = atual;
    }

    printf("\nHow many times and an odd number came after an even number: %d\n", contador);

    return 0;
}