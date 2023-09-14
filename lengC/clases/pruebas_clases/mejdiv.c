#include <stdio.h> //El programa dividirá dos números positivos
int main()
{
    float numer, denom, divi;
    printf("#### EL DIVISOR DE POSITIVOS ####\n\n");
    do
    {
        printf("\nIngrese el dividendo\nDividendo: ");
        scanf("%f", &numer);
        if(numer <= 0)
        {
        printf("\nEl dividendo debe ser positivo");
        }
    } while (numer <= 0);
    do
    {
        printf("\nIngrese el divisor\nDivisor: ");
        scanf("%f", &denom);
        if(denom <= 0)
        {
        printf("\nEl divisor debe ser positivo");
        }
    } while (denom <= 0);
    divi = numer / denom;

    printf("\nLa división es: %.2f\n\n", divi);

    return 0;
}
