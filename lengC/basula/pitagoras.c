#include <stdio.h>
#include <math.h>
int main()
{
float cat1, cat2, hip;
printf("\nEl siguiente programa calcula la hipotenusa de un triángulo rectángulo\n");
printf("Debe ingresar los catetos, que deben ser números positivos\n");
printf("Si ingresa valores negativos, se le volverá a pedir que ingrese el valor\n\n");

do{
    printf("Ingrese el valor del primer cateto\nCateto 1: ");
    scanf("%f",&cat1);
        if(cat1 <=0)
    {
        printf("\nLa medida del cateto debe ser un número positivo\n");
    }
}while(cat1<=0); //Esta parte pide el cateto 1, y exige que sea positivo

do{
    printf("Ingrese el valor del segundo cateto\nCateto 2: ");
    scanf("%f",&cat2);
    if(cat2 <=0)
    {
        printf("\nLa medida del cateto debe ser un número positivo\n");
    }
}while(cat2<=0); 

hip = sqrt(cat1*cat1+cat2*cat2);

printf("\nEl valor de la hipotenusa es: %.2f\n",hip);

return 0;
}
