#include <stdio.h>
#include <math.h>

int main() {
    int op;
    float n1, n2, c1, c2, hipo;
    float M_A[3][3], M_B[3][3], SUM[3][3];

    printf("\n[[ PROGRAMA PARA HACER VARIAS OPERACIONES ]]");

    do {
        printf("\n\n\n*** Seleccione una opcion: ***\n");
        printf("\n1. Sumar dos numeros😺\n");
        printf("2. Informar si un numero es par🧐🍷\n");
        printf("3. Calcular Cateto o Hipotenusa 😃🔫\n");
        printf("4. Sumar dos matrices de 3x3 👊😼\n");
        printf("5. Salir");
        printf("\nOpcion: ");
        scanf("%d", &op);

        switch (op) {

            case 1: // Suma de dos números
                printf("Ingrese A: ");
                scanf("%f", &n1);
                printf("Ingrese B: ");
                scanf("%f", &n2);
                float SUM = n1 + n2;
                printf("\nEl resultado de la suma es: %.2f\n", SUM);
                break;

            case 2: // Verificar si un número es par
                printf("\nQuiero verificar si este número es PAR: ");
                scanf("%f", &n1);
                if ((int)n1 % 2 == 0) {
                    printf("\nEl numero ingresado es PAR\n");
                } else {
                    printf("\nEl numero ingresado NO es PAR\n");
                }
                break;

            case 3: // Cateto o Hipotenusa
                printf("\n*** Seleccione una opción: ***");
                printf("\n\n1. Calcular hipotenusa\n2. Calcular Cateto\n");
                int subop;
                scanf("%d", &subop);

                switch (subop) {
                    case 1: // Calcular hipotenusa
                        printf("\nIngrese el primer cateto: ");
                        scanf("%f", &c1);
                        printf("Ingrese el segundo cateto: ");
                        scanf("%f", &c2);

                        if (c1 <= 0 || c2 <= 0) {
                            printf("\n**Los catetos deben ser positivos**\n");
                        } else {
                            hipo = sqrt(c1 * c1 + c2 * c2);
                            printf("\nLa hipotenusa es: %.2f\n", hipo);
                        }
                        break;

                    case 2: // Calcular Cateto
                        printf("\nIngrese el primer cateto: ");
                        scanf("%f", &c1);
                        printf("Ingrese la hipotenusa: ");
                        scanf("%f", &hipo);

                        if (c1 <= 0 || hipo <= c1) {
                            printf("\n**El cateto debe ser positivo y la hipotenusa mayor que el cateto**\n");
                        } else {
                            c2 = sqrt(hipo * hipo - c1 * c1);
                            printf("\nEl segundo cateto es: %.2f\n", c2);
                        }
                        break;

                    default:
                        printf("\nOpción no válida. Por favor, seleccione una opción válida\n");
                        break;
                }
                break;

            case 4: // Sumar dos matrices de 3x3
                printf("\nIngrese la primera matriz:\n");

                for (int fila = 0; fila < 3; fila++) {
                    for (int columna = 0; columna < 3; columna++) {
                        printf("M_A[%i][%i]= ", fila + 1, columna + 1);
                        scanf("%f", &M_A[fila][columna]);
                    }
                }

                printf("\nIngrese la segunda matriz:\n");

                for (int fila = 0; fila < 3; fila++) {
                    for (int columna = 0; columna < 3; columna++) {
                        printf("M_B[%i][%i]= ", fila + 1, columna + 1);
                        scanf("%f", &M_B[fila][columna]);
                    }
                }

                // Suma de matrices
                for (int fila = 0; fila < 3; fila++) {
                    for (int columna = 0; columna < 3; columna++) 
                    {
                        SUM[fila][columna] = M_A[fila][columna] + M_B[fila][columna];
                    }
                }

                printf("La matriz resultante es:\n");
                for (int fila = 0; fila < 3; fila++) {
                    for (int columna = 0; columna < 3; columna++) {
                        printf("%.2f ", SUM[fila][columna]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf("\n¡¡¡Ha salido del programa!!! ...\n\n> Asignatura: Pensamiento Computacional y Programación\n> Alumna: Martina Godoy Apablaza🤓👌\n> Curso: III°MB\n\n\n");
                break;

            default:
                printf("\nOpción no válida. Por favor, seleccione una opción válida\n");
                break;
        }

    } while (op != 5);

    return 0;
}
    