#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Dois inteiros: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Erro ao ler os inteiros.\n");
        return 1;
    }

    troca(&x, &y);

    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}