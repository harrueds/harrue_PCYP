#include <stdio.h>

int main() {
    int op;

    do {
        printf("\n\n\n** MENU: **\n\n");
        printf("> 1.- Ingresar\n");
        printf("> 2.- Mostrar\n");
        printf("> 3.- Nombre\n");
        printf("> 4.- Rut\n");
        printf("> 5.- Salir\n");
        printf("\n\n/// Selecciona una opción ///\n\nOPCIÓN: ");
        scanf("%i", &op);

        if (op == 1) {
            printf("\n~~ Usted ha ingresado... ");
        } else if (op == 2) {
            printf("\n~~ Usted está en mostrar...\n");
        } else if (op == 3) {
            printf("\n~~ Usted está en la opción nombre\n");
        } else if (op == 4) {
            printf("\n~~ Usted está en la opción RUT\n");
        } else if (op == 5) {
            printf("\n*** Saliendo del programa.***\n");
        } else {
            printf("\n¡¡¡ Elija una opción válida.!!!\n");
        }
    } while (op != 5);

    return 0;
}
