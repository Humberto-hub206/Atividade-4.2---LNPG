#include <stdio.h>

int maior(int a, int b){
    int maior;
    maior = (a>b)? a:b;
    return maior;
}

long fatorial(int n){
    long resultado = n;
    for (int i = 1; i < n; i++)
    {
        resultado *= (n-i);
    }
    return resultado;
    
}

int main(){
    int num1, num2;
    printf("Digite dois numeros inteiros:\n ");
    scanf("%d %d", &num1, &num2);
    printf("O maior numero e: %d \n", maior(num1, num2));
    printf("Digite um numero para descobrir o fatorial: \n");
    
    int num3;
    scanf("%d", &num3);
    printf("O fatorial do numero e: %ld", fatorial(num3));

    return 0;
}
