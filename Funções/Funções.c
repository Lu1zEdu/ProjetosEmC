#include <stdio.h>

// Definição de uma função que retorna a soma de dois inteiros
int soma(int a, int b)
{
    return a + b;
}

int main()
{
    int resultado = soma(4, 7);
    printf("A soma é: %d\n", resultado);
    return 0;
}
