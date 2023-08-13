#include <stdio.h>
int main()
{
    float ingresado;
    printf("Ingrese un número cualquiera: ");
    scanf("%f", &ingresado);

    if (ingresado > 0)
    {
        printf("\nEl número es positivo");
    }
    else if (ingresado == 0)
    {
        printf("\nEl número es cero");
    }
    else
    {
        printf("\nEl número es negativo");
    }

    return 0;
}