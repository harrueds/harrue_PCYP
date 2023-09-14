#include<stdio.h>
int main()
{
    int ingresado,valortrue, valorfalse;
    printf("\nEscribe un 5\n");
    scanf("%i",&ingresado);
    valortrue = (5==ingresado);
    valorfalse = (5!= ingresado);
    printf("\nTrue es: %i\n",valortrue);
    printf("\nFalse es %i\n\n",valorfalse);
    return 0;    
}