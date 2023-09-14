#include <stdio.h>
#include <math.h>

float cateto(float c2, float h)
{
    return sqrt(h * h - c2 * c2);
}

float hipotenusa(float c1, float c2)
{
    return sqrt(c1 * c1 + c2 * c2);
}

int main()
{
    int op;
    float c1, c2, h;
    printf("\n\n***Este programa realiza las siguientes operaciones***");
    printf("\n\n     * Calcula la hipotenusa si se le dan los dos catetos.");
    printf("\n     * Calcula uno de los catetos si se le da la hipotenusa y el otro cateto");
    do
    {
        printf("\n\nIngrese la opción para realizar su cálculo:\n");
        printf("\nOpción 1: Calcular hipotenusa\nOpción 2: Calcular cateto\nOpción 3: Salir\nOpción 4: Calcular Nuevamente");
        printf("\nSu opción: ");
        scanf("%i", &op);
        switch (op)
        {
        case 1:
                do
                {
                    printf("\nIngrese la medida del primer cateto: ");
                    scanf("%f", &c1);
                    if (c1 <= 0)
                    {
                        printf("\nEl cateto debe ser positivo");
                    }
                } while (c1 <= 0);
                do
                {
                    printf("\nIngrese la medida del segundo cateto: ");
                    scanf("%f", &c2);
                    if (c2 <= 0)
                    {
                        printf("\nEl cateto debe ser positivo");
                    }
                } while (c2 <= 0);
            h = hipotenusa(c1,c2);
            printf("\nLa medida de la hipotenusa es: %.2f", h);
            break;
        case 2:
            do
            {
                do
                {
                    printf("\nIngrese la medida de la hipotenusa: ");
                    scanf("%f", &h);
                    if (h <= 0)
                    {
                        printf("\nLa hipotenusa debe ser positiva");
                    }
                } while (h <= 0);
                do
                {
                    printf("\nIngrese la medida del cateto: ");
                    scanf("%f", &c2);
                    if (c2 <= 0)
                    {
                        printf("\nEl cateto debe ser positivo");
                    }
                } while (c2 <= 0);
                if (h <= c2)
                {
                    printf("\nLa hipotenusa debe ser mayor que el cateto");
                }
            } while (h <= c2);
            c1 = cateto(c2, h);
            printf("\nLa medida del cateto es: %.2f", c1);
            break;
        }
    } while (op ==1 || op == 2 || op == 4);
    printf("\n\nHas salido del programa\n\n");
}
