#include <stdio.h>
#include <math.h>

// Función para sumar dos números
double sumar(double a, double b) {
    return a + b;
}

// Función para verificar si un número es par
int esPar(int numero) {
    return numero % 2 == 0;
}

// Función para calcular cateto o hipotenusa
double calcularCatetoHipotenusa(double a, double b, int opcion) {
    if (opcion == 1) {
        return sqrt(a * a - b * b); // Calcular cateto
    } else if (opcion == 2) {
        return sqrt(a * a + b * b); // Calcular hipotenusa
    } else {
        return -1.0; // Opción no válida
    }
}

// Función para sumar dos matrices de 3x3
void sumarMatrices(double matriz1[3][3], double matriz2[3][3]) {
    double resultado[3][3];

    printf("Resultado de la suma:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%.2lf\t", resultado[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int opcion, variable=0;
    double numero1, numero2;
    int numero;
    double cateto, hipotenusa;
    double matriz1[3][3], matriz2[3][3];

    while (variable) {
        printf("\nMenú:\n");
        printf("1. Sumar dos números\n");
        printf("2. Verificar si un número es par\n");
        printf("3. Calcular cateto o hipotenusa\n");
        printf("4. Sumar dos matrices de 3x3\n");
        printf("5. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
                printf("Ingrese el primer número: ");
                scanf("%lf", &numero1);
                printf("Ingrese el segundo número: ");
                scanf("%lf", &numero2);
                printf("La suma es: %.2lf\n", sumar(numero1, numero2));
                break;
            case 2:
                printf("Ingrese un número entero: ");
                scanf("%d", &numero);
                if (esPar(numero)) {
                    printf("%d es par.\n", numero);
                } else {
                    printf("%d no es par.\n", numero);
                }
                break;
            case 3:
                printf("Ingrese el valor del cateto: ");
                scanf("%lf", &cateto);
                printf("Ingrese el valor de la hipotenusa: ");
                scanf("%lf", &hipotenusa);
                printf("Elija la opción:\n");
                printf("1. Calcular el otro cateto\n");
                printf("2. Calcular la otra cateto o hipotenusa\n");
                scanf("%d", &opcion);
                if (opcion == 1 || opcion == 2) {
                    double resultado = calcularCatetoHipotenusa(cateto, hipotenusa, opcion);
                    if (resultado >= 0) {
                        if (opcion == 1) {
                            printf("El otro cateto es: %.2lf\n", resultado);
                        } else {
                            printf("El otro cateto es: %.2lf\n", resultado);
                            printf("La hipotenusa es: %.2lf\n", hipotenusa);
                        }
                    } else {
                        printf("Opción no válida.\n");
                    }
                } else {
                    printf("Opción no válida.\n");
                }
                break;
            case 4:
                printf("Ingrese los elementos de la primera matriz de 3x3:\n");
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        printf("Ingrese el elemento (%d, %d): ", i, j);
                        scanf("%lf", &matriz1[i][j]);
                    }
                }
                printf("Ingrese los elementos de la segunda matriz de 3x3:\n");
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        printf("Ingrese el elemento (%d, %d): ", i, j);
                        scanf("%lf", &matriz2[i][j]);
                    }
                }
                sumarMatrices(matriz1, matriz2);
                break;
            case 5:
                printf("¡Adiós!\n");
                return 0;
default:
                printf("Opción no válida. Por favor, ingrese una opción válida.\n");
                break;
        }
    }

    return 0;
}
