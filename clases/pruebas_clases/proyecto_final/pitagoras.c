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
        printf("\nOpción 1: Calcular hipotenusa\tOpción 2: Calcular cateto");
        printf("\nSu opción: ");
        scanf("%int", &op);
        switch (op)
        {
        case 2:
            do
            {
                do
                {
                    printf("\nIngrese la medida de la hipotenusa: ");
                    scanf("%f", &h);
                } while (h <= 0);
                do
                {
                    printf("\nIngrese la medida del cateto: ");
                    scanf("%f", &c2);
                } while (c2 <= 0);
            } while (h <= c2);
            c1 = cateto(c2, h);
            printf("\nLa medida del cateto es: %.2f", c1);
        }
    } while (op == 4);
    printf("\n\n");
}