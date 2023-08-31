#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,q,h,inten,resp;
    float resp2;
        printf("\n Calculadora de hipotenusa y catetos \n");
        printf("Este programa esta diseñado para calcular la hipotenusa o un cateto\n");
        do{
        do{
            printf("\nIngrese un numero para elegir que quiere calcular\n1- Hipotenusa\n2- Cateto\nSu opcion: ");
            scanf("%i",&q);
        }while(q<=0 || q>2);
        if(q==1){
            do{
                printf("\nIngrese el cateto 1(positivo): ");
                scanf("%i",&a);
            }while(a<=0);
            do{
                printf("\nIngrese el segundo cateto(positivo): ");
                scanf("%i",&b);
            }while(b<=0);
            resp2= sqrt(pow(a,2) + pow(b,2));
            printf("\nLa hipotenusa es= %.2f",resp2);
        }
        else if(q==2){
            do{
                printf("\nIngrese el cateto(positivo): ");
                scanf("%i",&a);
                printf("\nIngrese la hipotenusa(que sea positivo y no sea menor que el cateto): ");
                scanf("%i",&h);
            }while(a<=0 || h<=0 || h<a);
            resp= sqrt(pow(h,2)-pow(a,2));
            printf("\nEl cateto es: %i",resp);
        }
        printf("\n\nSi desea hacer otro calculo ingrese (5) y si quiere salir ingrese cualquier otro numero: ");
        scanf("%i",&inten);
        system("clear");
    }while(inten==5);
    return 0;
}
