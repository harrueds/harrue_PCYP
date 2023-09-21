#include <stdio.h>
// #include<math.h>
int main()
{
    int x1[2], x2[2], op, mn, md;
    printf("\n****Este programa calcula la ecuación de una recta***\n\n");
    do
    {
        printf("Ingrese las coordenadas del primer punto para calcular la ecuación de la recta:\nx1= ");
        scanf("%i", &x1[0]);
        printf("y1= ");
        scanf("%i", &x1[1]);
        printf("\n");

        printf("Ingrese las coordenadas del segundo punto para calcular la ecuación de la recta:\nx2= ");
        scanf("%i", &x2[0]);
        printf("y2= ");
        scanf("%i", &x2[1]);
        printf("\n");

        printf("Los puntos son: (%i,%i) y (%i,%i)\n", x1[0], x1[1], x2[0], x2[1]);
        printf("¿Confirma que son correcto estos puntos?\n");
        printf("1.- SI\t2.- NO\nSu opción: ");
        scanf("%i", &op);

        if (op == 2)
        {
            printf("\nIngrese nuevamente los puntos\n");
        }
    } while (op == 2);

    mn = (x2[1] - x1[1]);
    md = (x2[0] - x1[0]);
    if(mn == md)
    {
        printf("\nLa pendiente de la recta es m=1");
    }
    else if(mn == (-1)*md)
    {
        printf("\nLa pendiente de la recta es m=-1");
    }
    else if(mn>0 && md>0)
    {
        printf("\nLa pendiente de la recta es m=%i/%i\n\n",mn,md);
    }
    else if(mn>0 && md<0)
    {
        md = md*(-1);
        printf("\nLa pendiente de la recta es m= -%i/%i\n\n",mn,md);
    }
        else if(mn<0 && md>0)
    {
        printf("\nLa pendiente de la recta es m= %i/%i\n\n",mn,md);
    }
        else if(mn<0 && md<0)
    {
        mn = mn*(-1);
        md = md*(-1);
        printf("\nLa pendiente de la recta es m= %i/%i\n\n",mn,md);
    }
    n = 
    printf("\nLa ecuación de la recta es ");
    return 0;
}