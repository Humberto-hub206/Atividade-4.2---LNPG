#include <stdio.h>

void divmod(int a, int b, int *q, int *r) {
    *q = a / b; 
    *r = a % b; 
}

int main() {
    int a, b, q, r;

    printf("Dividendo e divisor: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Erro ao ler os valores.\n");
        return 1;
    }

    if (b == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 1;
    }

    divmod(a, b, &q, &r);

    printf("Quociente: %d, Resto: %d\n", q, r);

    return 0;
}