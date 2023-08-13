#include <stdio.h>
int main()
{
int numerador, denominador;
float fraccion;
printf("\nIngrese el numerador de la fracción\nNumerador: ");
scanf("%i",&numerador);
do
{
printf("\nIngrese el denominador\nDenominador: ");
scanf("%i",&denominador);
if(denominador == 0)
{
printf("\nEl denominador debe ser distinto de cero");
}
}while(denominador == 0);
fraccion=numerador/denominador;
printf("\nLa fracción es %i/%i, y su valor decimal es %.4f\n",numerador, denominador, fraccion);
return 0;
}