#include <stdio.h>
int main()
{
    int op;
    float divi, n1, n2, sum, res, mul;
    printf("\nCALCULADORA SIMPLE\n\n");
    printf("\nIngrese el primer número: ");
    scanf("%f", &n1);
    do
    {
        printf("\nIngrese el segundo número, distinto de 0: ");
        scanf("%f", &n2);
    } while (n2 == 0);

    printf("\nIngrese su opción:\n1.- Suma\n2.- Resta\n3.- Multiplicación\n4.- División\n5.- Otra operación\n6.- Salir\nSu opción: ");
    scanf("%i", &op);
    do
    {
        if (op == 5)
        {
            system("clear");
            printf("\nIngrese el primer número: ");
            scanf("%f", &n1);
            do
            {
                printf("\nIngrese el segundo número, distinto de 0: ");
                scanf("%f", &n2);
            } while (n2 == 0);
        }
        else if (op == 1)
        {
            sum = n1 + n2;
            printf("\nLa suma de %.2f y %.2f es: %.2f\n", n1, n2, sum);
        }
        else if (op == 2)
        {
            res = n1 - n2;
            printf("\nLa resta de %.2f y %.2f es: %.2f\n", n1, n2, res);
        }
        else if (op == 3)
        {
            mul = n1 * n2;
            printf("\nLa multiplicación de %.2f y %.2f es: %.2f\n", n1, n2, mul);
        }
        else if (op == 4)
        {
            divi = n1 / n2;
            printf("\nLa división de %.2f y %.2f es: %.2f\n", n1, n2, divi);
        }
        else
        {
            break;
        }
        printf("\nIngrese su opción:\n1.- Suma\n2.- Resta\n3.- Multiplicación\n4.- División\n5.- Otra operación\n6.- Salir\nSu opción: ");
        scanf("%i", &op);
    } while (op == 1 || op == 2 || op == 3 || op == 4 || op == 5);
    printf("\n");
}