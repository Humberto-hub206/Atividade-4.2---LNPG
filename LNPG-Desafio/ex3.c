
#include <stdio.h>

void divmod(int a, int b, int *q, int *r);

void divmod(int a, int b, int *q, int *r) {
    *q = a / b;
    *r = a % b;
}

int main() {
    int a, b;
    int q, r;

    printf("Dividendo e divisor: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Erro: divisao por zero!\n");
        return 1;
    }

    divmod(a, b, &q, &r);

    printf("Quociente: %d, Resto: %d\n", q, r);

    return 0;
}
