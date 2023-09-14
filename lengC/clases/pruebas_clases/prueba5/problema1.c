#include <stdio.h>
int main()
{
    int base, exp, pot=1, i;
    do{
        do{
            printf("\nIngrese la base par:\nBase: ");
            scanf("%i",&base);
        }while(base%2!=0);
        do{
            printf("\nIngrese el exponente par:\nExponente: ");
            scanf("%i",&exp);
        }while(exp%2!=0);
    }while(base == 0 && exp == 0);
    
    for(i=0;i<exp;i++)
    {
        pot *= base;
    }

    printf("\n\nLa potencia es: %i\n\n",pot);
    return 0;
}
