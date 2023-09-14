#include <stdio.h> //el sistema debe estar bien definido
int main()
{
    int a1, b1, c1, a2, b2, c2;
    float d, dx,dy, x, y;
    printf("\nIngrese los coeficientes de las ecuaciones en orden:");
    printf("\na1= ");
    scanf("%i",&a1);
    printf("\nb1= ");
    scanf("%i",&b1);
    printf("\nc1= ");
    scanf("%i",&c1);
    printf("\na2= ");
    scanf("%i",&a2);
    printf("\nb2= ");
    scanf("%i",&b2);
    printf("\nc2= ");
    scanf("%i",&c2);
    printf("\nEl sistema de ecuaciones es:");
    printf("\n%ix+%iy=%i",a1,b1,c1);
    printf("\n%ix+%iy=%i\n",a2,b2,c2);
    d=a1*b2-b1*a2;
    dx=c1*b2-b1*c2;
    dy=a1*c2-c1*a2;
    x=dx/d;
    y=dy/d;
    printf("\nLas soluciones son:\nx=%.2f\ny=%.2f\n\n",x,y);
    return 0;
}