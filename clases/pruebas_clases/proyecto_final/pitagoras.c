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
    printf("Este programa realiza las siguientes operaciones:");
    printf("\n1.- Calcula la hipotenusa si se le dan los dos catetos.");
    printf("\2.- Calcula uno de los catetos si se le da la hipotenusa y el otro cateto");
    printf("\n\nIngrese la opción para realizar su cálculo:\n");
    printf("\nOpción 1: Calcular cateto\tOpción 2: Calcular hipotenusa");
    printf("\nSu opción:__");
    scanf("%int", &op);
    switch (op)
    {
    case 1:
        do
        {
            printf("\nIngrese la medida de la hipotenusa: ");
            scanf("%f", &h);
            printf("\nIngrese la medida del cateto: ");
            scanf("%f", &c2);
        }while(h<=c2);
    }
}