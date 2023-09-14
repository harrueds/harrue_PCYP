#include <stdio.h>
int main()
{
    int i, n, act = 1, ant=0, sig=1;
    printf("\nEste programa muestra los valores de la sucesión de Fibonacci hasta el valor n ingresado");
    printf("\nIngrese el valor de n, natural: ");
    scanf("%i", &n);
    for (i = 0; i < n; i++)
    {
        printf("%i  ", sig);
        sig = act+ant;
        ant=act;
        act=sig;
    }
    printf("\n\n");
    return 0;
}