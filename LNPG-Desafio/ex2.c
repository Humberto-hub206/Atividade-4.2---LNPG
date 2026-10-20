
#include <stdio.h>

void troca(int *a, int *b);

void troca(int *a, int *b) {
    int temporario = *a;
    *a = *b;
    *b = temporario;
}

int main() {
    int x, y;

    printf("Dois inteiros: ");
    scanf("%d %d", &x, &y);

    troca(&x, &y);

    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}
