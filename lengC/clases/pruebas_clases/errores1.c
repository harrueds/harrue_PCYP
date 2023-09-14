#include <stdio.h>

int main() {
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);

    if (num1 > num2)
        printf("El mayor número es: %i\n", num1);
    else if (num2 > num1)
        printf("El mayor número es: %i\n", num2);
    else
        printf("Los números son iguales.\n");

    return 0;
}
