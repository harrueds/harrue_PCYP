#include <stdio.h>
int main()
{
    float a, b;
    printf("\nIngrese un número");
    scanf("%f", &a);
    printf("\ningrese otro numero");
    scanf("%f", &b);
    if (a < 0 && b < 0)
    {
        printf("\nLos dos son negativos");
    }
    else if ((a < 0 && b > 0) || (a > 0 && b < 0))
    {
        printf("\nUno es positivo y el otro negativo");
    }
    else
    {
        printf("\nLos dos son negativos");
    }
    return 0;
}