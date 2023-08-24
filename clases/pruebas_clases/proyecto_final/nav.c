#include <stdio.h>
#include <math.h>
int main()
{
    float c1, c2, hi;
    int ele;
    printf("ESTE PROGRAMA HACE LO SIGUIENTE: \n\ncalcula el cateto o la hipotenusa en base a la elección del usuario.\n:)\n");
    printf("\n¿qué desea hacer?:\n1-calcular la hipotenusa\n2-calcular un cateto\n3-no quiero nada\n===>:");
    scanf("%i", &ele);
    do
    {
        switch (ele)
        {
        case 1:
            do
            {
                printf("ingrese el cateto 1:");
                scanf("%f", &c1);
            } while (c1 <= 0);
            do
            {
                printf("ingrese el cateto 2:");
                scanf("%f", &c2);
            } while (c2 <= 0);
            hi = sqrt(c1 * c1 + c2 * c2);
            printf("la hipotenusa es:%.2lf\n", hi);
            return 9;
            break;
        case 2:
            do
            {
                printf("ingrese un cateto: ");
                scanf("%f", &c1);
            } while (c1 <= 0);
            do
            {
                printf("ingrese la hipotenusa: ");
                scanf("%f", &hi);
            } while (hi < c1);
            c2 = sqrt(hi * hi - c1 * c1);
            printf("la segundo cateto es:%.2lf", c2);
            return 9;
            break;
        case 3:
            return 0;
            break;
        default:
            printf("esa no era una opción zopenco xd");
            break;
        }
        printf("\n¿qué desea hacer?:\n1-calcular la hipotenusa\n2-calcular un cateto\n3-no quiero nada\n===>:");
        scanf("%i", &ele);
    } while (ele == 1 || ele == 2 || ele == 3);
    printf("\n");
    return 0;
}