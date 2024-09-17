#include <stdio.h>

int main()
{
    int dia = 3;

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    default:
        printf("Dia inválido\n");
    }

    return 0;
}
