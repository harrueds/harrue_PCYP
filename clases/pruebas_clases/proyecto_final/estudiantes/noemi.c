#include <stdio.h>
#include <math.h>

int main() {
    int opcion, resp, inten;
    float cateto1,cateto2, hipotenusa, cat1, cat2;

    printf("\nCalculadora de hipotenusa y catetos\n");
    printf("Este programa esta diseñado para calcular la hipotenusa o un cateto\n");

    do {
        printf("\nIngrese un numero para elegir cual desea calcular:\n");
        printf("1- Cateto\n2- Hipotenusa\nSu opcion: ");
        scanf("%i", &opcion);

        if (opcion == 1) {
            do{
            printf("\nIngrese el valor de la hipotenusa:\nHip: ");
            scanf("%f",&hipotenusa);
            if(hipotenusa <=0)
            {
                printf("\ndebe ser positiva\n");
            }
            }while(hipotenusa<=0);
            printf("\nIngrese el cateto:\nCat: ");
            scanf("%f",&cat1);

        } else if (opcion == 2) {
            int h, b;
        } else {
            printf("\nOpcion no valida. Por favor, elija 1 o 2.\n");
        }

        printf("\n¿Desea realizar otro calculo? (1 para salir, 0 para no): ");
        scanf("%i", &resp);
    } while (opcion == 1);

    printf("\nGracias por usar la calculadora.\n");

	printf("\nIngrese el valor del cateto 1: ");
	scanf("%f",&cat1);

	printf("\nIngrese el valor del cateto 2: ");
	scanf("%f",&cat2);

	hipotenusa=sqrt((cat1*cat1)+(cat2*cat2));
	printf("\nLa hipotenusa del triangulo es: %.2f ",hipotenusa);

	printf("\nCalculo de la hipotenusa de un Triangulo rectangulo");
	printf("\n\nIntroduce el valor de un cateto: ");
	scanf("%f", &cateto1);

	printf("\nIntroduce el valor del otro cateto: ");
	scanf("%f", &cateto2);

	hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
	printf("\n\nLa hipotenusa es: %f", hipotenusa);

	printf("\n\n\n\nPulsa cualquier tecla para salir.\n");



	printf("\nIngrese el valor del cateto 1: ");
	scanf("%f",&cat1);

	printf("\nIngrese el valor del cateto 2: ");
	scanf("%f",&cat2);

	hipotenusa=sqrt((cat1*cat1)+(cat2*cat2));
	printf("\nLa hipotenusa del triangulo es: %.2f ",hipotenusa);

	printf("\nCalculo de la hipotenusa de un Triangulo rectangulo");
	printf("\n\nIntroduce el valor de un cateto: ");
	scanf("%f", &cateto1);

	printf("\nIntroduce el valor del otro cateto: ");
	scanf("%f", &cateto2);

	hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
	printf("\n\nLa hipotenusa es: %f", hipotenusa);

	printf("\n\n\n\nPulsa cualquier tecla para salir.\n");
return 0;
}
