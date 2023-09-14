#include <stdio.h>
int main()
{
    int num, i, resto;
    printf("\nEste programa entrega los divisores de un natural\n");
    printf("\nIngrese el número natural\nNúmero: ");
    scanf("%i", &num);
    printf("\nLos divisores de %i son:\n", num);
    for (i = 1; i < num; i++)
    {
        resto = num % i;
        if (resto == 0)
        {
            printf("%i", i);
            if(i < num-i && num%2 ==0)
            {
            printf(", ");
            }
            else if(i < num-i*i && num%2 == 1){
            printf(", ");
            }
        }
    }
    printf(" y %i\n\n",num);
}