#include <stdio.h>
#include <math.h>

int main() {
    int opcion;
    float cateto1, cateto2, hipotenusa;
    int continuar = 1;

    while (continuar) {
        printf("Menú:\n");
        printf("1. Cálculo de hipotenusa\n");
        printf("2. Cálculo de cateto\n");
        printf("3. Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                do {
                    printf("Ingrese el valor del primer cateto: ");
                    scanf("%f", &cateto1);
                } while (cateto1 <= 0);

                do {
                    printf("Ingrese el valor del segundo cateto: ");
                    scanf("%f", &cateto2);
                } while (cateto2 <= 0);

                hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
                printf("La hipotenusa es: %.2f\n", hipotenusa);
                break;

            case 2:
                do {
                    printf("Ingrese el valor de la hipotenusa: ");
                    scanf("%f", &hipotenusa);
                } while (hipotenusa <= 0);

                do {
                    printf("Ingrese el valor del cateto: ");
                    scanf("%f", &cateto1);
                } while (cateto1 <= 0 || cateto1 > hipotenusa);

                float cateto2_calculado = sqrt(hipotenusa * hipotenusa - cateto1 * cateto1);
                if (cateto2_calculado < 0) {
                    printf("No es posible calcular el cateto con esos valores.\n");
                } else {
                    printf("El cateto calculado es: %.2f\n", cateto2_calculado);
                }
                break;

            case 3:
                continuar = 0;
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción no válida.\n");
                break;
        }

        if (continuar) {
            int otraOperacion;
            printf("¿Desea realizar otra operación? (1: Sí / 0: No): ");
            scanf("%d", &otraOperacion);
            if (!otraOperacion) {
                continuar = 0;
                printf("Saliendo del programa.\n");
            }
        }
    }

    return 0;
}
