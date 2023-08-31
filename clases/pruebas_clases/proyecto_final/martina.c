#include <stdio.h>
#include <math.h>

int main() {
    int opcion;
    double c1, c2, hipo;
    printf("\n《PROGRAMA PARA CALCULAR CATETO o HIPOTENUSA》");
 
    do {
        printf("\n\nSeleccione una opción:\n");
        printf("\n1. Calcular cateto\n");
        printf("\n2. Calcular hipotenusa\n");
        printf("\n\nOpción: ");
        scanf("%d", &opcion);
    } while (opcion != 1 && opcion != 2);

    if (opcion == 1) {
        do {
            printf("\nIngrese el primer cateto (positivo): ");
            scanf("%lf", &c1);
        } while (c1 <= 0);

        do {
            printf("\nIngrese el segundo cateto (positivo): ");
            scanf("%lf", &c2);
        } while (c2 <= 0);

        hipo = sqrt(c1 * c1 + c2 * c2);
        printf("\n\nLa hipotenusa es: %.2lf\n", hipo);
        
    } else {
        do {
            printf("\nIngrese el primer cateto (positivo): ");
            scanf("%lf", &c1);
        } while (c1 <= 0);

        do {
            printf("\nIngrese la hipotenusa (positiva): ");
            scanf("%lf", &hipo);
        } while (hipo <= 0);

        c2 = sqrt(hipo * hipo - c1 * c1);
        printf("\n\nEl segundo cateto es: %.2lf\n", c2);
    }

    return 0;
}
