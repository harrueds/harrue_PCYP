#include <math.h>
#include <stdio.h>
int main()
{
    int a,b,c;
    float disc,x1,x2,x;
    printf("\nIngrese las constantes en el siguiente orden, A, B y C:\nA= ");
    scanf("%i",&a);
    printf("\nB= ");
    scanf("%i",&b);
    printf("\nC= ");
    scanf("%i",&c);
    disc=b*b-4*a*c;
    printf("\nEl discriminante es %.2f",disc);
    if(disc<0)
    {
        printf("\nAl ser negativo el discriminante, no existe solución real\n\n\n");
    }
    else if(disc==0)
    {
        x=-b/(2*a);
        printf("\nEl discriminante es cero, por lo que existe una solucion real.");
        printf("\nLa solución es: %.2f\n\n\n",x);
    }
    else
    {
        x1=(-b-pow(disc,0.5))/(2*a);
        x2=(-b+pow(disc,0.5))/(2*a);
        printf("\nEl discriminante es positivo, por lo que existen dos soluciones:");
        printf("\nLas soluciones son:\n x1=%.2f \t x2=%.2f\n\n\n",x1,x2);
    }
    return 0;
}
