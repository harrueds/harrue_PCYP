#include <stdio.h>

int main() {
    float numero;
    char caracter;
    int intentos = 4;

    printf("Ingrese un número decimal (float): ");

    while (scanf("%f", &numero) != 1)
    {
        while (getchar() != '\n'); // Limpiar el búfer de entrada

        if (intentos == 1) {
            printf("Has agotado todos los intentos. El programa se cerrará.\n");
            return 1; // Salir del programa con código de error 1
        }
        else if(intentos ==2)
        {
            printf("\nQUEDA UN INTENTO ANTES DE CERRAR EL PROGRAMA\n\n");
        }

        printf("Error: Ha ingresado un carácter no válido. Intente nuevamente.\n");
        printf("Ingrese un número decimal (float): ");
        intentos--;
    }
    
    printf("El número ingresado es: %f\n", numero);

    return 0;
}
