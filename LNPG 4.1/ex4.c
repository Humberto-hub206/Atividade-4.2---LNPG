#include <stdio.h>

long soma_iter(int n){
    long soma = 0;
    for (int i = 1; i < soma; i++)
    {
        soma += (soma -i);
    }
    return soma;
}

int main()
{
    int num1;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("iter = %ld", soma_iter(num1));
    return 0;
}
