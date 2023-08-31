#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,q,h,inten,resp;
    float resp2;
        printf("\n ^^Calculadora de hipotenusa y catetos^^ \n");
        printf("Este programa esta diseñado para calcular la hipotenusa o un cateto\n");
        do{
        do{
            printf("\nIngrese un numero para elegir que quiere calcular\n\t1- Hipotenusa\n\t2- Cateto\n\t3- Salir\nSu opcion: ");
            scanf("%i",&q);
            if(q<1 || q>3){
                printf("\nIngrese un numero de las opciones\n");
            }
        }while(q<=0 || q>3);
        if(q==1){
            do{
                printf("\nIngrese el primer cateto(positivo): ");
                scanf("%i",&a);
                if(a<=0){
                    printf("\nIngrese un numero positivo(ni cero ni menos de cero)\n");
                }
            }while(a<=0);
            do{
                printf("\nIngrese el segundo cateto(positivo): ");
                scanf("%i",&b);
                if(b<=0){
                    printf("\nIngrese un numero positivo(ni cero ni menor de cero)\n");
                }
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
                if(a<=0 || h<=0){
                    printf("\nLos numeros ingresados deben ser positivos\n");
                }
                if(h<a){
                    printf("\nRecuerde que la hipotenusa no debe ser menor que el cateto\n");
                }
            }while(a<=0 || h<=0 || h<a);
            resp= sqrt(pow(h,2)-pow(a,2));
            printf("\nEl cateto es: %i",resp);
        }
        if(q==3){
            printf("\nEste programa fue hecho por Jender Moreno de 3ro Medio B, del Colegio los leones de Quilpue\n");
            return 0;
        }
        printf("\n\nSi desea hacer otro calculo ingrese (5) y si quiere salir ingrese cualquier otro numero: ");
        scanf("%i",&inten);
        system("clear");
    }while(inten==5);
    printf("\nEste programa fue hecho por Jender Moreno, de 3ro Medio B, del colegio Los leones de Quilpue\n");
    return 0;
}

