
#include <stdio.h>
#include "mathlib.h"

int main() {
    int a, b, n;

    printf("Dois inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Maior: %d\n", maior(a, b));

    printf("n para o fatorial: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Digite um valor entre 0 e 20.\n");
        return 1;
    }

    printf("Fatorial: %ld\n", fatorial(n));

    return 0;
}
