#include <stdio.h>
#include <math.h>
int main()
{
    float cat, teto, hipo;
    int op;
    printf("Calculador de hipotenusa y cateto\n\n\n");
   do
        {
    printf("\nIngrese la operación que quiera realizar:\n1.-Calcular hipotenusa\n2.-Calcular cateto\n4.-Salir\n");
    scanf("%i", &op);

            switch(op)
            {
             case 1:

                do
                {
                    printf("Ingrese el primer cateto: ");
                    scanf("%f",&cat);
                    printf("Ingrese el segundo cateto: ");
                    scanf("%f",&teto);
                    if (cat <= 0 || teto <= 0)
                    {
                       printf("Deben ser positivos\n");
                    }
                }
                while (cat <= 0 || teto <= 0);
              hipo = sqrt(cat * cat + teto * teto);
              printf("La hipotenusa es: %.2f\n", hipo);
              printf("\n¿Desea realizar otro cálculo?\nPresione 3 para si, presione 4 para salir\n");
              scanf("%i",&op);
              break;

             case 2:
             printf("ingrese la hipotenusa (debe ser mayor al cateto):");
             scanf("%f",&hipo);
             printf("ingrese el cateto:");
             scanf("%f",&teto);
                cat = sqrt (hipo * hipo - teto * teto);
                printf("\nEl valor del cateto es:%.2f", cat);
                break;

/*             case 3:
                printf("Volver a realizar otro cálculo");
                break;*/

             case 4:
                printf("Programa finalizado\n¡Gracias por utilizar este programa!\nConstanza Mella\n3 Medio A\nColegio Los Leones\n\n");
                break;
            }
        }while (op == 1 || op == 2 || op==3);
 return 0;
}
