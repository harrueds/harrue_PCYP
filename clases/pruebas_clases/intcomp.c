#include <stdio.h>
int main()
{
    int i;
    float ci, cf = 0, interes, n, acum;
    printf("\nEste programa calcula el capital final aplicando interes compuesto");
    printf("\nIngrese el capital inicial\nCapital inicial: ");
    scanf("%f", &ci);
    printf("\nIngrese el interés como porcentaje\nInterés: ");
    scanf("%f", &interes);
    printf("\nIngrese la cantidad de períodos\nn= ");
    scanf("%f", &n);
    acum = ci;
    for (i = 0; i < n; i++)
    {
        cf = ci * (1+interes);
        ci = cf;
    }
    printf("\nEl capital final es %.2f", cf);
    printf("\nEl interes acumulado es: %.2f\n\n", cf-acum);
    return 0;
}