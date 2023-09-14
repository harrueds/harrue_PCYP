#include <stdio.h>
#include <math.h>
int main()
{
    float a, raiz;
    int opcion;
    do{
    printf("ingrese A no negativo: ");
    scanf("%f",&a);
    } while(a<0);
    raiz = sqrt(a);
    printf("\nLa raiz de a es: %.2f\n",raiz);
    printf("\n¿Quiere calcular otra raiz?\nOpcion 1: SI\nOpcion 2: NO");
    scanf("%i",&opcion);
    while(opcion==1){
    do{
        printf("ingrese A no negativo: ");
        scanf("%f",&a);
    } while(a<0);
    raiz = sqrt(a);
    printf("\nLa raiz de a es: %.2f\n",raiz);
    }
    return 0;
}
