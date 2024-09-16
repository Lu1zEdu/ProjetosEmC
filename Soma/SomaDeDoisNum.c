#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, resultado;

    // Solicita ao usuário para inserir dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Calcula a soma
    resultado = soma(num1, num2);

    // Exibe o resultado
    printf("A soma é: %d\n", resultado);

    return 0;
}
