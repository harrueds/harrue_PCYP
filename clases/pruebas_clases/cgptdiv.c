
#include <stdio.h>

int main() {
    int numero1, numero2;
    float resultado;

    // Solicitar el primer número
    printf("Ingrese el primer número positivo: ");
    scanf("%d", &numero1);

    // Verificar que el primer número sea positivo
    if (numero1 <= 0) {
        printf("Error: El primer número debe ser positivo.\n");
        return 1; // Salir del programa con error
    }

    // Solicitar el segundo número
    printf("Ingrese el segundo número positivo: ");
    scanf("%d", &numero2);

    // Verificar que el segundo número sea positivo
    if (numero2 <= 0) {
        printf("Error: El segundo número debe ser positivo.\n");
        return 1; // Salir del programa con error
    }

    // Realizar la división
    resultado = (float)numero1 / numero2;

    // Mostrar el resultado de la división
    printf("El resultado de la división es: %.2f\n", resultado);

    return 0;
}
