#include <stdio.h>
int main()
{ // ESTE ES UN EJEMPLO DE SWITCH-CASE
    int op, sum, res, mul, n1, n2;
    float div;
do{
    printf("\nIngrese el primer número: ");
    scanf("%i", &n1);
    do
    {
        printf("\nIngrese el segundo número, distinto de 0: ");
        scanf("%i", &n2);
    } while (n2 == 0);
    do
    {
        printf("\nIngrese su opción:\n1.- Suma\n2.- Resta\n3.- Multiplicación\n4.- División\n5.-Otra operacion\n6.- Salir\nSu opción: ");
        scanf("%i", &op);

        switch (op)
        {
        case 1: // SI SE PRESIONA 1, SE HACE ESO, HASTA DONDE DICE BREAK
            sum = n1 + n2;
            printf("\nLa suma de %i y %i es: %i", n1, n2, sum);
            break; // BREAK ES PARA SALIR
        case 2:
            res = n1 - n2;
            printf("\nLa resta de %i y %i es: %i", n1, n2, sum);
            break;
        case 3:
            mul = n1 * n2;
            printf("\nLa multiplicación de %i y %i es: %i", n1, n2, mul);
            break;
        case 4:
            div = n1 / n2;
            printf("\nLa división de %i y %i es: %.2f", n1, n2, div);
            break;
        default: // ESTO ES PARA CUANDO SE PRESIONES CUALQUIER COSA QUE NO SEA OPCION 1 O 2.
            printf("\nLA OPCION %i NO ESTÁ EN EL MENÚ\n\n", op);
            break;
        }
        printf("\n");
    } while (op == 1 || op == 2 || op == 3 || op == 4);
}while(op==5);
}
