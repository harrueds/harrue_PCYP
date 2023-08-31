#include <stdio.h>
#include <math.h>

int main() {
    int op;
    float c1, c2, hipo;
    
    printf("\n《PROGRAMA PARA CALCULAR CATETO o HIPOTENUSA》");

    do {
        do {
            printf("\n\n\n*** Seleccione una opción: ***\n");
            printf("1. Calcular hipotenusa\n");
            printf("2. Calcular cateto\n");
            printf("3. Salir\n");
            printf("\nOpción: ");
            scanf("%i", &op);

            if (op == 3) {
                printf("\nHa salido del programa...\n");
                return 0;
            }
        } while (op != 1 && op != 2);

        if (op == 1) {
            do {
                printf("\nIngrese el primer cateto: ");
                scanf("%f", &c1);
                if (c1 <= 0) {
                    printf("\n**El cateto debe ser positivo**\n");
                }
            } while (c1 <= 0);

            do {
                printf("\nIngrese el segundo cateto: ");
                scanf("%f", &c2);
                if (c2 <= 0) {
                    printf("\n**El cateto debe ser positivo**\n");
                }
            } while (c2 <= 0);

            hipo = sqrt(c1 * c1 + c2 * c2);
            printf("\nLa hipotenusa es: %.2f\n", hipo);

        } else {
            do {
                printf("\nIngrese el primer cateto: ");
                scanf("%f", &c1);
                if (c1 <= 0) {
                    printf("\n**El cateto debe ser positivo**\n");
                }
            } while (c1 <= 0);

            do {
                printf("\nIngrese la hipotenusa: ");
                scanf("%f", &hipo);
                if (hipo <= c1) {
                    printf("\n**La hipotenusa debe ser mayor que el cateto**\n");
                }
            } while (hipo <= c1);

            c2 = sqrt(hipo * hipo - c1 * c1);
            printf("\nEl segundo cateto es: %.2f\n", c2);
        }
    } while (op == 1 || op == 2);

    printf("\nHa salido del programa...\n");
    return 0;
}