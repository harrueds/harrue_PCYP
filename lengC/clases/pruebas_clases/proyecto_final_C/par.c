#include<stdio.h>
int main()
{
    int numero;
    printf("\nIngrese el n° para decidir si es par o no: ");
    scanf("%i",&numero);
    if (numero%2 == 0)
    {
        printf("\nEl número es par\n\n");
    }
    else
    {
        printf("\nEl número es impar\n\n");
    }
}
